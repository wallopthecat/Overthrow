disableSerialization;
private _sel = lbCurSel 1500;
if(_sel == -1) exitWith {};
    
private _id = lbData [1500, _sel];
private _job = [];
{
    _x params ["_jobid","_j"];
    if(_jobid == _id) exitWith {_job = _j};
}foreach(server getVariable ["OT_activeJobs",[]]);

if(count _job > 0) then {
    _job params ["_info","_markerPos"];
    [player,_markerPos,_info select 0] call OT_fnc_givePlayerWaypoint;
};
