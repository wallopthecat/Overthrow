
OT_allJobs = [];
{
    _code = gettext (_x >> "condition");
    _target = gettext (_x >> "target");
    _script = gettext (_x >> "script");
    _repeat = getnumber (_x >> "repeatable");
    OT_allJobs pushback [configName _x, _target, compileFinal _code, compileFinal preprocessFileLineNumbers _script, _repeat];
}foreach("true" configClasses ( configFile >> "CfgOverthrowMissions" ));

private _assignJob = {
    params ["_id","_jobdef","_params"];

    _jobdef params ["_name","_target","_condition","_code","_repeat"];

    _active = server getVariable ["OT_activeJobs",[]];
    _job = [_id,_params] call _code;
    _j = [_id,_job,_repeat];
    _active pushback _j;

    server setVariable ["OT_activeJobs",_active,true];

    _j spawn {
        params ["_id","_job","_repeat"];
        _job params ["_info","_markerPos","_setup","_fail","_success","_end","_jobparams"];
        _jobparams call _setup;

        private _done = false;
        while {sleep 1; !_done} do {
            if(_jobparams call _success) exitWith {
                _jobparams pushback true;
                _jobparams call _end;
            };
            if(_jobparams call _fail) exitWith {
                _jobparams pushback false;
                _jobparams call _end;
            };
        };
        _active = server getVariable ["OT_activeJobs",[]];
        _active deleteAt (_active find _this);
        server setVariable ["OT_activeJobs",_active,true];

        _active = server getVariable ["OT_activeJobIds",[]];
        _active deleteAt (_active find _id);

        if(_repeat < 1) then {
            _completed = server getVariable ["OT_completedJobIds",[]];
            _completed pushback _id;
        };
    };
};

_completed = server getVariable "OT_completedJobIds";
if(isNil "_completed") then {
    server setVariable ["OT_completedJobIds",[],false];
    _completed = server getVariable "OT_completedJobIds";
};

while {sleep OT_jobWait;true} do {
    _activeJobs = server getVariable ["OT_activeJobIds",[]];
    {
        _x params ["_name","_target","_condition","_code"];
        _jobdef = _x;
        call {
            if(_target == "Town") exitWith {
                {
                    _id = format["%1-%2",_name,_x];
                    _stability = server getVariable [format["stability%1",_x],100];
                    _loc = server getVariable _x;
                    _inSpawnDistance = _loc call OT_fnc_inSpawnDistance;

                    if((call _condition) and !(_id in _completed) and !(_id in _activeJobs)) then {
                        _activeJobs pushback _id;
                        [_id,_jobdef,[_x]] call _assignJob;
                    };
                }foreach(OT_allTowns);
            };

            if(_target == "Faction") exitWith {
                {
                    _x params ["_cls"];
                    _pos = server getVariable [format["factionrep%1",_cls],[]];
                    _town = "";
                    if(count _pos > 0) then {
                        _standing = server getVariable [format["standing%1",_cls],0];
                        _inSpawnDistance = _pos call OT_fnc_inSpawnDistance;
                        _town = _pos call OT_fnc_nearestTown;
                        _id = format["%1-%2",_name,_cls];
                        if((call _condition) and !(_id in _completed) and !(_id in _activeJobs)) then {
                            _activeJobs pushback _id;
                            [_id,_jobdef,[_cls]] call _assignJob;
                        };
                    };
                }foreach(OT_allFactions);
            };
        };
    }foreach(OT_allJobs);
    server setVariable ["OT_activeJobIds",_activeJobs,false];
};
