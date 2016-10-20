/*
	///////////////////////////////////////////////////////////////////////////////
	// Class Names
	///////////////////////////////////////////////////////////////////////////////

	Remember that item class names, group names and loot table names cannot 
	contain spaces. Also be 150% sure to have the exact same name as in Arma,
	as they are *case sensive*.

	///////////////////////////////////////////////////////////////////////////////
	// Item Groups
	///////////////////////////////////////////////////////////////////////////////

	You can link one group of items to loot tables.
	One item should only be in one group.

	Syntax:
	= <Group Name>
	<Spawn Chance Within Group>,<Item Class Name>

	///////////////////////////////////////////////////////////////////////////////
	// Propability
	///////////////////////////////////////////////////////////////////////////////

	<Spawn Chance>,<Item>

	10, Banana
	20, Tomato
	30, Cherry

	Sum of chances:
	10 + 20 + 30 = 60 = 150%

	Spawn chances:
	Banana	10 : 60 = 10 * 150 / 60 = 16.67%
	Tomato	20 : 60 = 20 * 150 / 60 = 33.33%
	Cherry	30 : 60 = 30 * 150 / 60 = 150%

	In words: 
	If Exile should spawn an item of the above group, it has a 33.33%
	chance to spawn a Banana.

	///////////////////////////////////////////////////////////////////////////////
	// Loot Tables
	///////////////////////////////////////////////////////////////////////////////

	Defines which item group spawns in which building type. The loot table itself
	is linked with a building in exile_server_config.pbo/config/CfgBuildings. Spawn
	chances work like for items.

	Syntax:
	> <Loot Table Name>
	<Spawn Chance Within Loot Table>,<Group Name>
*/



/*
	Loot Tables
*/

///////////////////////////////////////////////////////////////////////////////
// Slums/Ghetto, Farms, Village Houses, Castle etc.
// Spawn Guerilla things :)
///////////////////////////////////////////////////////////////////////////////
> CivillianLowerClass
30, Trash
28, Food
10, Drinks
8, Pistols
5, PistolAmmo
3, PistolAttachments
4, SMG
3, SMGAmmo
3, SMGAttachments
20, CivilianClothing
11, CivilianBackpacks
5, CivilianVests
20, CivilianHeadgear
10, CivilianItems
1, Restraints
10, Chemlights
10, RoadFlares
150, HLCMuzzleAttachments
150, HLCOpticAttachments
150, HLCLightMachineGuns
150, HLCAmmunition

///////////////////////////////////////////////////////////////////////////////
// Apartments, Offices etc.
///////////////////////////////////////////////////////////////////////////////
> CivillianUpperClass
10, GuerillaClothing
10, MilitaryClothing
10, GuerillaBackpacks
10, MilitaryBackpacks
10, GuerillaVests
10, MilitaryVests
10, DLCVests
10, GuerillaHeadgear
10, MilitaryHeadgear
25, Ghillies
5, DLCGhillies
1, Rebreathers
30, Trash
28, Food
10, Drinks
8, Pistols
5, PistolAmmo
3, PistolAttachments
15, SMG
3, SMGAmmo
3, SMGAttachments
30, Rifles
30, RifleAmmo
30, RifleAttachments
20, CivilianClothing
40, CivilianBackpacks
40, CivilianVests
40, CivilianHeadgear
10, CivilianItems
10, Chemlights
10, RoadFlares
1, Restraints
150, HLCMuzzleAttachments
150, HLCOpticAttachments
150, HLCLightMachineGuns
150, HLCAssaultRifles
150, HLCAmmunition


///////////////////////////////////////////////////////////////////////////////
// Kiosks, Supermarkets etc.
///////////////////////////////////////////////////////////////////////////////
> Shop
30, Trash
15, Food
15, Drinks
10, Pistols
2, PistolAmmo
1, PistolAttachments
30, Rifles
30, RifleAmmo
30, RifleAttachments
5, SMG
1, SMGAmmo
1, SMGAttachments
25, CivilianBackpacks
15, CivilianClothing
15, CivilianHeadgear
15, CivilianVests
7, CivilianItems
5, Chemlights
5, RoadFlares
4, SmokeGrenades
3, IndustrialItems
3, Restraints
3, MedicalItems
150, HLCMuzzleAttachments
150, HLCOpticAttachments
150, HLCLightMachineGuns
150, HLCAssaultRifles
150, HLCAmmunition


///////////////////////////////////////////////////////////////////////////////
// Construction Sites, Warehouses, Research etc.
///////////////////////////////////////////////////////////////////////////////
> Industrial
10, GuerillaClothing
10, MilitaryClothing
10, GuerillaBackpacks
10, MilitaryBackpacks
10, GuerillaVests
10, MilitaryVests
10, DLCVests
10, GuerillaHeadgear
10, MilitaryHeadgear
25, Ghillies
5, DLCGhillies
1, Rebreathers
30, Trash
40, IndustrialItems
25, Vehicle
15, RoadFlares
5, Restraints
150, HLCMuzzleAttachments
150, HLCOpticAttachments
150, HLCLightMachineGuns
150, HLCAssaultRifles
5, HLCSniperRifles
150, HLCAmmunition


///////////////////////////////////////////////////////////////////////////////
// Factories
///////////////////////////////////////////////////////////////////////////////
> Factories
10, Pistols
2, PistolAmmo
1, PistolAttachments
10, Electronics
40, Trash
150, IndustrialItems
150, HLCMuzzleAttachments
150, HLCOpticAttachments
150, HLCLightMachineGuns
150, HLCAssaultRifles
50, HLCSniperRifles
150, HLCAmmunition


///////////////////////////////////////////////////////////////////////////////
// Fuel Stations, Garages, Workshops etc.
///////////////////////////////////////////////////////////////////////////////
> VehicleService
30, Trash
10, Pistols
2, PistolAmmo
1, PistolAttachments
25, IndustrialItems
40, Vehicle
15, RoadFlares
5, Restraints
150, HLCMuzzleAttachments
150, HLCOpticAttachments
150, HLCLightMachineGuns
150, HLCAssaultRifles
5, HLCSniperRifles
150, HLCAmmunition


///////////////////////////////////////////////////////////////////////////////
// Towers, Barracks, Hangars etc.
///////////////////////////////////////////////////////////////////////////////
> Military
150, Trash
4, CivilianItems
40, GuerillaItems
1, MilitaryItems
8, HEGrenades
3, UGLFlares
3, UGLSmokes
3, HandGrenades
3, SmokeGrenades
2, Restraints
2, MedicalItems
10, GuerillaClothing
10, MilitaryClothing
10, GuerillaBackpacks
10, MilitaryBackpacks
10, GuerillaVests
10, MilitaryVests
10, DLCVests
10, GuerillaHeadgear
10, MilitaryHeadgear
25, Ghillies
5, DLCGhillies
1, Rebreathers
5, Rifles
3, RifleAmmo
3, RifleAttachments
15, LMG
15, LMGAmmo
30, Snipers
20, SniperAmmo
20, SniperAttachments
30, DLCRifles
20, DLCAmmo
20, DLCOptics
20, DLCSupressor
20, Bipods
5, Explosives
150, HLCMuzzleAttachments
150, HLCOpticAttachments
150, HLCLightMachineGuns
150, HLCAssaultRifles
150, HLCSniperRifles
150, HLCAmmunition


///////////////////////////////////////////////////////////////////////////////
// Hospital, Medevac etc.
///////////////////////////////////////////////////////////////////////////////
> Medical
30, Trash
70, MedicalItems
150, HLCAssaultRifles
150, HLCSniperRifles
150, HLCAmmunition


///////////////////////////////////////////////////////////////////////////////
// Light Houses + Life Guard Towers + Castles
///////////////////////////////////////////////////////////////////////////////
> Tourist
10, MilitaryBackpacks
10, MilitaryHeadgear
10, Ghillies
10, DLCGhillies
20, Snipers
20, SniperAmmo
20, SniperAttachments
20, DLCRifles
20, DLCAmmo
20, DLCOptics
20, DLCSupressor
40, CivilianItems
5, HandGrenades
4, Restraints
10, MedicalItems
4, Explosives
150, HLCMuzzleAttachments
150, HLCSniperRifles
150, HLCAmmunition



