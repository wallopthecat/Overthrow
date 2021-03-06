class CfgFunctions
{
	class OT
	{
		class Base
		{
			file = "\ot\functions";
			class initVar {};
			class initOverthrow {};
			class assignMission {};
			class canPlace {};
			class cleanup {};
			class hasOwner {};
			class spawnTemplate {};
			class spawnTemplateAttached {};
			class unitStock {};
			class setOwner {};
			class getOwner {};
			class vehicleCanMove {};
			class cleanDead {};
		};

		class Factions
		{
			file = "\ot\functions\factions";
			class factionNATO {};
			class factionGUER {};
			class factionCIV {};
			class factionCRIM {};
			class unitSeen {};
			class unitSeenNATO {};
			class unitSeenCRIM {};
			class unitSeenAny {};
			class unitSeenPlayer {};
			class revealToNATO {};
			class revealToCRIM {};
		};

		/* Persistent Save */
		class Save
		{
			file = "\ot\functions\save";
			class saveGame {};
			class loadGame {};
			class setOfflinePlayerAttribute {};
			class getOfflinePlayerAttribute {};
			class loadPlayerData {};
		};

		class Player
		{
			file = "\ot\functions\player";
			class initPlayerLocal {};
			class mapSystem {};
			class perkSystem {};
			class setupPlayer {};
			class statsSystem {};
			class wantedSystem {};
			class playerIsOwner {};
			class playerIsGeneral {};
			class playerIsAtWarehouse {};
			class playerIsAtHardwareStore {};
			class tutorial {};
			class influence {};
			class influenceSilent {};
			class rewardMoney {};
			class money {};
			class getPlayerHome {};
			class generalIsOnline {};
			class doConversation {};
			class givePlayerWaypoint {};
		};

		class Interaction
		{
			file = "\ot\functions\interaction";
			class mountAttached {};
			class initAttached {};
			class updateAttached {};
			class initObjectLocal {};
			class initStaticMGLocal {};
		};

		class Events
		{
			file = "\ot\functions\events";
			class preInit {preInit = 1;};
			class postInit {postInit = 1;};
			class deathHandler {};
			class buildingDamagedHandler {};
			class cargoLoadedHandler {};
			class explosivesPlacedHandler {};
			class playerConnectHandler {};
			class playerDisconnectHandler {};
			class refuelHandler {};
			class respawnHandler {};
			class keyHandler {};
		};

		class UI
		{
			file = "\ot\functions\UI";
			class notifyMinor {};
			class notifyBig {};
			class notifyGood {};
			class notifyVehicle {};
			class playerDecision {};
			class notifyStart {};
			class progressBar {};
			class getAssignedKey {};
			class formatTime {};
			class notifyAndLog {};
		};

		class Dialogs
		{
			file = "\ot\functions\UI\dialogs";

			class mainMenu {};
			class buyDialog {};
			class sellDialog {};
			class workshopDialog {};
			class policeDialog {};
			class warehouseDialog {};
			class inputDialog {};
			class importDialog {};
			class recruitDialog {};
			class buyClothesDialog {};
			class buyVehicleDialog {};
			class gunDealerDialog {};
			class factoryDialog {};
			class garrisonDialog {};
			class newGameDialog {};
			class optionsDialog {};
			class resistanceDialog {};
			class reverseEngineerDialog {};
			class vehicleDialog {};
			class mapInfoDialog {};
			class characterSheetDialog {};
			class manageRecruitsDialog {};
			class loadoutDialog {};
			class buyHardwareDialog {};
			class sellHardwareDialog {};
			class jobsDialog {};
			class craftDialog {};
		};

		class Display
		{
			file = "\ot\functions\UI\display";
			class displayShopPic {};
			class displayWarehousePic {};
			class showMemberInfo {};
			class showBusinessInfo {};
			class refreshEmployees {};
			class displayJobDetails {};
			class displayCraftItem {};
			class factoryRefresh {};
		};

		/*
		* User actions
		*/
		class Actions
		{
			file = "\ot\functions\actions";

			class newGame {};

			/* Main Menu */
			class salvageWreck {};
			class buyBuilding {};
			class buyBusiness {};
			class manageArea {};
			class fastTravel {};
			class talkToCiv {};
			class recruitCiv {};
			class leaseBuilding {};
			class place {};
			class setHome {};
			class build {};

			/* Options */
			class increaseTax {};
			class decreaseTax {};

			/* Vehicle */
			class transferTo {};
			class transferFrom {};
			class transferLegit {};
			class takeLegit {};
			class warehouseTake {};

			/* Port */
			class exportAll {};
			class import {};

			/* Workshop */
			class workshopAdd {};

			/* Shop */
			class buy {};
			class sell {};
			class sellAll {};

			/* Gun Dealer */
			class getMission {};

			/* Factory */
			class factoryQueueAdd {};
			class factoryQueueRemove {};
			class factoryQueueRemoveAll {};

			/* Resistance Screen */
			class makeGeneral {};
			class giveFunds {};
			class takeFunds {};
			class transferFunds {};
			class hireEmployee {};
			class fireEmployee {};

			/* Jobs */
			class setJobWaypoint {};

			/* Safe */
			class safePutMoney {};
			class safeTakeMoney {};
			class safeSetPassword {};

			/* Ammobox */
			class removeLoadout {};
			class restoreLoadout {};
			class saveLoadout {};
			class dumpStuff {};
			class takeStuff {};

			/* Other */
			class craft {};
			class recruitSoldier {};
			class recruitSquad {};
			class addGarrison {};
			class addPolice {};
			class lockVehicle {};
			class reverseEngineer {};
		};

		/*
		* Locations, positions etc.
		*/
		class Geography
		{
			file = "\ot\functions\geography";
			class getRandomBuilding {};
			class nearestBase {};
			class nearestCheckpoint {};
			class nearestComms {};
			class nearestLocation {};
			class nearestMobster {};
			class nearestObjective {};
			class nearestPositionRegion {};
			class nearestTown {};
			class getRegion {};
			class townsInRegion {};
			class regionIsConnected {};
			class getAO {};
			class getBuildId {};
			class weatherSystem {};
			class getRandomRoadPosition {};
		};

		/*
		* The spawner
		*/
		class Virtualization
		{
			file = "\ot\functions\virtualization";
			class initVirtualization {};
			class runVirtualization {};

			class spawn {};
			class despawn {};
			class inSpawnDistance {};
			class registerSpawner {};
			class deregisterSpawner {};
			class updateSpawnerPosition {};
			class resetSpawn {};
		};

		class Spawners
		{
			file = "\ot\functions\virtualization\spawners";

			class spawnAmbientVehicles {};
			class spawnBoatDealers {};
			class spawnBusinessEmployees {};
			class spawnCarDealers {};
			class spawnCivilians {};
			class spawnFactionRep {};
			class spawnGendarmerie {};
			class spawnGunDealer {};
			class spawnNATOCheckpoint {};
			class spawnNATOObjective {};
			class spawnPolice {};
			class spawnShops {};
		};

		/*
		* The economy, trade and real estate
		*/
		class Economy
		{
			file = "\ot\functions\economy";
			class initEconomy {};
			class initEconomyLoad {};
			class setupTownEconomy {};
			class standing {};
			class getPrice {};
			class getSellPrice {};
			class getDrugPrice {};
			class nearestRealEstate {};
			class getRealEstateData {};
			class getBusinessData {};
			class getBusinessPrice {};
			class getTaxIncome {};
			class resistanceFunds {};
			class incomeSystem {};
			class propagandaSystem {};
			class stability {};
		};

		/*
		* Inventory transfer and manegement
		*/
		class Inventory
		{
			file = "\ot\functions\inventory";
			class takeFromCargoContainers {};
			class hasFromCargoContainers {};
			class anythingGetName {};
			class weaponGetName {};
			class magazineGetName {};
			class vehicleGetName {};
			class glassesGetName {};
			class weaponGetPic {};
			class magazineGetPic {};
			class vehicleGetPic {};
			class glassesGetPic {};
			class magazineGetDescription {};
			class vehicleGetDescription {};
			class getSearchStock {};
		};

		/*
		* The warehouse
		*/
		class Warehouse
		{
			file = "\ot\functions\warehouse";
			class removeFromWarehouse {};
			class findHelmetInWarehouse {};
			class findScopeInWarehouse {};
			class findWeaponInWarehouse {};
			class findVestInWarehouse {};
		};

		/*
		* AI and recruits
		*/
		class AI
		{
			file = "\ot\functions\AI";
			class createSoldier {};
			class getSoldier {};
			class parachuteAll {};
			class NATOsearch {};
			class createSquad {};
			class experience {};
			class initVCOMAI {};
		};

		/*
		* AI orders
		*/
		class Orders
		{
			file = "\ot\functions\AI\orders";
			class orderLoot {};
			class orderOpenInventory {};
			class orderRevivePlayer {};
			class squadAssignVehicle {};
			class squadGetIn {};
			class squadGetOut {};
			class orderStopAndFace {};
		};

		/*
		* NPCs
		*/
		class NPC
		{
			file = "\ot\functions\AI\NPC";
			class randomLocalIdentity {};
			class applyIdentity {};
			class initCarDealer {};
			class initCivilian {};
			class initCivilianGroup {};
			class initCriminal {};
			class initCrimLeader {};
			class initGendarm {};
			class initGendarmPatrol {};
			class initGunDealer {};
			class initHarbor {};
			class initMilitary {};
			class initMilitaryPatrol {};
			class initMobBoss {};
			class initMobster {};
			class initNATOCheckpoint {};
			class initPolice {};
			class initPolicePatrol {};
			class initPriest {};
			class initShopkeeper {};
			class initSniper {};
			class initRecruit {};
		};

		/*
		* Math.. how does it work?
		*/
		class Math
		{
			file = "\ot\functions\math";
			class rotationMatrix {};
			class matrixMultiply {};
			class matrixRotate {};
		};

		/*
		* NATO
		*/
		class NATO
		{
			file = "\ot\functions\factions\NATO";
			class initNATO {};

			class NATOQRF {};
			class NATOGroundForces {};
			class CTRGSupport {};
			class NATOAirSupport {};
			class NATOGroundSupport {};
			class NATOSeaSupport {};

			class NATOResponseObjective {};
			class NATOResponseTown {};
			class NATOCounterTown {};
			class NATOCounterObjective {};

			class NATOSupportSniper {};
			class NATOSupportRecon {};
			class NATOConvoy {};
			class NATODeployFOB {};
			class NATOMissionDeployFOB {};
			class NATOMissionReconDestroy {};
			class NATOSetExplosives {};
			class NATOupgradeFOB {};
			class NATOsendGendarmerie {};
		};

		class NATOAI
		{
			file = "\ot\functions\factions\NATO\AI";
			class NATODrone {};
			class NATOMortar {};
		};

		class CRIM
		{
			file = "\ot\functions\factions\CRIM";
			class formOrJoinGang {};
		};

		class GUER
		{
			file = "\ot\functions\factions\GUER";
			class jobSystem {};
		};

		class Buildings
		{
			file = "\ot\functions\buildings";
			class initBuilding {};
			class initObservationPost {};
			class initPoliceStation {};
			class initWorkshop {};
			class initTrainingCamp {};
			class initWarehouse {};
		};

		/*
		* Mod integration
		*/
		class Integration
		{
			file = "\ot\functions\integration";
			class initTFAR {};
			class advancedTowingInit {};
			class detectItems {};
		};
	};
};
