#include <SADXModLoader.h>
HMODULE Chaos0 = GetModuleHandle(L"BOSSCHAOS0MODELS");

NJS_MATERIAL* WhiteDiffuse[] = {
	//Egg Hornet
	((NJS_MATERIAL*)0x0155D1DC),
	//Egg Hornet level
	&matlist_0005B834[0],
	//Chaos 0 helicopter
	&matlist_0005528C[0],
	&matlist_0005528C[1],
	//Chaos 4 level
	&matlist_0004C318[0],
	//Egg Viper cockpit
	((NJS_MATERIAL*)0x0166BD68),
	((NJS_MATERIAL*)0x0166BD7C),
	((NJS_MATERIAL*)0x0166BD90),
	((NJS_MATERIAL*)0x0166BDA4),
	((NJS_MATERIAL*)0x0166BDB8),
	((NJS_MATERIAL*)0x0166BDCC),
	((NJS_MATERIAL*)0x0166BDE0),
	
};

NJS_MATERIAL* Chaos0Materials[] = {
	//Pole
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0004DA58),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0004DA6C),
	//Chaos0 main
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x00013AF0),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x00013AF0),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x00014018),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x00014280),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x00013870),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x000135F0),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000A75C),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000F518),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000F52C),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000EDE0),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000EDF4),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000E718),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000DFCC),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000DFE0),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000DFF4),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x00012A0C),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000DBF0),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000D8E0),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000D20C),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000CF6C),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000CB84),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000C810),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000C500),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000BE2C),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000BB8C),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000B7A4),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x0000A1C0),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x00009F0C),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x000099C4),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x00009720),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x000094B0),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x00008D40),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x00008A8C),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x00008544),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x000082A0),
	(NJS_MATERIAL*)((size_t)Chaos0 + 0x00008030),
};

NJS_MATERIAL* ChaosPuddle[] = {
	((NJS_MATERIAL*)0x038D936C),
	((NJS_MATERIAL*)0x038DDA04),
};

NJS_MATERIAL* SpecialBossMaterials[] = {
	//Chaos 2
	//extending arm
	((NJS_MATERIAL*)0x01143380),
	((NJS_MATERIAL*)0x01143118),
	((NJS_MATERIAL*)0x01142C30),
	((NJS_MATERIAL*)0x01142748),
	((NJS_MATERIAL*)0x01142130),
	((NJS_MATERIAL*)0x01141C48),
	((NJS_MATERIAL*)0x01141760),
	((NJS_MATERIAL*)0x01141278),
	((NJS_MATERIAL*)0x01140D90),
	((NJS_MATERIAL*)0x01140BD8),
	((NJS_MATERIAL*)0x01140A24),
	((NJS_MATERIAL*)0x01140118),
	((NJS_MATERIAL*)0x0113FD38),
	((NJS_MATERIAL*)0x0113F850),
	//everything else
	((NJS_MATERIAL*)0x01143924),
	((NJS_MATERIAL*)0x01139FC8),
	((NJS_MATERIAL*)0x01139900),
	((NJS_MATERIAL*)0x01139780),
	((NJS_MATERIAL*)0x011392A8),
	((NJS_MATERIAL*)0x0113335C),
	((NJS_MATERIAL*)0x01133A20),
	((NJS_MATERIAL*)0x01121BE0),
	((NJS_MATERIAL*)0x011235B8),
	((NJS_MATERIAL*)0x011235CC),
	((NJS_MATERIAL*)0x01122DA0),
	((NJS_MATERIAL*)0x011226D8),
	((NJS_MATERIAL*)0x011224F0),
	((NJS_MATERIAL*)0x01121F18),
	((NJS_MATERIAL*)0x0112F2E0),
	((NJS_MATERIAL*)0x0112ED08),
	((NJS_MATERIAL*)0x0112EAA0),
	((NJS_MATERIAL*)0x0112E5B8),
	((NJS_MATERIAL*)0x0112E0D0),
	((NJS_MATERIAL*)0x0112DAB8),
	((NJS_MATERIAL*)0x0112D5D0),
	((NJS_MATERIAL*)0x0112D0E8),
	((NJS_MATERIAL*)0x0112CC00),
	((NJS_MATERIAL*)0x0112C718),
	((NJS_MATERIAL*)0x0112C560),
	((NJS_MATERIAL*)0x0112C3AC),
	((NJS_MATERIAL*)0x0112BAA0),
	((NJS_MATERIAL*)0x0112B5B8),
	((NJS_MATERIAL*)0x0112B1D8),
	((NJS_MATERIAL*)0x0112ACF4),
	((NJS_MATERIAL*)0x0112A820),
	((NJS_MATERIAL*)0x0112A248),
	((NJS_MATERIAL*)0x01129FE0),
	((NJS_MATERIAL*)0x01129AF8),
	((NJS_MATERIAL*)0x01129610),
	((NJS_MATERIAL*)0x01128FF8),
	((NJS_MATERIAL*)0x01128B10),
	((NJS_MATERIAL*)0x01128628),
	((NJS_MATERIAL*)0x01128140),
	((NJS_MATERIAL*)0x01127C58),
	((NJS_MATERIAL*)0x01127AA0),
	((NJS_MATERIAL*)0x011278EC),
	((NJS_MATERIAL*)0x01126FE0),
	((NJS_MATERIAL*)0x01126AF8),
	((NJS_MATERIAL*)0x01126718),
	((NJS_MATERIAL*)0x01126234),
	((NJS_MATERIAL*)0x01125D64),
	((NJS_MATERIAL*)0x01132B88),
	((NJS_MATERIAL*)0x01132718),
	((NJS_MATERIAL*)0x011324D4),
	((NJS_MATERIAL*)0x011320DC),
	((NJS_MATERIAL*)0x01131EAC),
	((NJS_MATERIAL*)0x01131AB8),
	((NJS_MATERIAL*)0x01131648),
	((NJS_MATERIAL*)0x01131404),
	((NJS_MATERIAL*)0x0113100C),
	((NJS_MATERIAL*)0x01130DDC),
	((NJS_MATERIAL*)0x011309EC),
	//Chaos 6
	((NJS_MATERIAL*)0x01271BCC),
	((NJS_MATERIAL*)0x01271BE0),
	((NJS_MATERIAL*)0x012718D4),
	((NJS_MATERIAL*)0x01270910),
	((NJS_MATERIAL*)0x01270924),
	((NJS_MATERIAL*)0x01270938),
	((NJS_MATERIAL*)0x0127094C),
	((NJS_MATERIAL*)0x01270700),
	((NJS_MATERIAL*)0x012704E0),
	((NJS_MATERIAL*)0x012702C0),
	((NJS_MATERIAL*)0x012700A4),
	((NJS_MATERIAL*)0x0126FE60),
	((NJS_MATERIAL*)0x0126FBE8),
	((NJS_MATERIAL*)0x0126F970),
	((NJS_MATERIAL*)0x0126F6F4),
	((NJS_MATERIAL*)0x0126F174),
	((NJS_MATERIAL*)0x0126EB68),
	((NJS_MATERIAL*)0x0126E6EC),
	((NJS_MATERIAL*)0x0126E20C),
	((NJS_MATERIAL*)0x0126DC00),
	((NJS_MATERIAL*)0x0126D778),
	((NJS_MATERIAL*)0x0126D298),
	((NJS_MATERIAL*)0x0126CA44),
	((NJS_MATERIAL*)0x0126C51C),
	((NJS_MATERIAL*)0x0126C530),
	((NJS_MATERIAL*)0x0126C220),
	((NJS_MATERIAL*)0x0126BDBC),
	((NJS_MATERIAL*)0x0126BAE0),
	((NJS_MATERIAL*)0x0126B684),
	((NJS_MATERIAL*)0x0126B378),
	((NJS_MATERIAL*)0x0126AF14),
	((NJS_MATERIAL*)0x0126AC60),
	((NJS_MATERIAL*)0x0126A7FC),
	((NJS_MATERIAL*)0x0126A51C),
	((NJS_MATERIAL*)0x0126A000),
	((NJS_MATERIAL*)0x01269CF4),
	((NJS_MATERIAL*)0x01269800),
	((NJS_MATERIAL*)0x012694F0),
	((NJS_MATERIAL*)0x01268D80),
	((NJS_MATERIAL*)0x01267EB4),
	((NJS_MATERIAL*)0x012677A0),
	((NJS_MATERIAL*)0x012672E0),
	((NJS_MATERIAL*)0x01266BA4),
	((NJS_MATERIAL*)0x01266968),
	((NJS_MATERIAL*)0x01266488),
	((NJS_MATERIAL*)0x01265F74),
	((NJS_MATERIAL*)0x01265890),
	((NJS_MATERIAL*)0x012653D0),
	((NJS_MATERIAL*)0x01264C9C),
	((NJS_MATERIAL*)0x01264A58),
	((NJS_MATERIAL*)0x012645D0),
	((NJS_MATERIAL*)0x012640B8),
	((NJS_MATERIAL*)0x0126391C),
	((NJS_MATERIAL*)0x012633C4),
	((NJS_MATERIAL*)0x01263064),
	((NJS_MATERIAL*)0x01262B88),
	//Chaos6 transforming
	((NJS_MATERIAL*)0x01288360),
	((NJS_MATERIAL*)0x01287E10),
	((NJS_MATERIAL*)0x012878E8),
	((NJS_MATERIAL*)0x01287340),
	((NJS_MATERIAL*)0x01286DEC),
	((NJS_MATERIAL*)0x01285FE4),
	((NJS_MATERIAL*)0x01284F6C),
	((NJS_MATERIAL*)0x01284944),
	((NJS_MATERIAL*)0x01284344),
	((NJS_MATERIAL*)0x01283DA4),
	((NJS_MATERIAL*)0x01283804),
	((NJS_MATERIAL*)0x01283264),
	((NJS_MATERIAL*)0x01282CC4),
	((NJS_MATERIAL*)0x01282724),
	((NJS_MATERIAL*)0x01282184),
	((NJS_MATERIAL*)0x012817AC),
	((NJS_MATERIAL*)0x012812FC),
	((NJS_MATERIAL*)0x01280FC0),
	((NJS_MATERIAL*)0x01280AB0),
	//Chaos6 transformed
	((NJS_MATERIAL*)0x01293990),
	((NJS_MATERIAL*)0x01293528),
	((NJS_MATERIAL*)0x01292ED8),
	((NJS_MATERIAL*)0x01292C20),
	((NJS_MATERIAL*)0x01292968),
	((NJS_MATERIAL*)0x012926B0),
	((NJS_MATERIAL*)0x012923F8),
	((NJS_MATERIAL*)0x01292140),
	((NJS_MATERIAL*)0x01291E88),
	((NJS_MATERIAL*)0x01291400),
	((NJS_MATERIAL*)0x01290E54),
	((NJS_MATERIAL*)0x012909A8),
	((NJS_MATERIAL*)0x01290408),
	((NJS_MATERIAL*)0x01290114),
	((NJS_MATERIAL*)0x0128FC78),
	((NJS_MATERIAL*)0x0128F640),
	((NJS_MATERIAL*)0x0128F008),
	((NJS_MATERIAL*)0x0128E9D0),
	((NJS_MATERIAL*)0x0128E398),
	((NJS_MATERIAL*)0x0128DD60),
	((NJS_MATERIAL*)0x0128D728),
	((NJS_MATERIAL*)0x0128D4E4),
	((NJS_MATERIAL*)0x0128C42C),
	((NJS_MATERIAL*)0x0128C440),
	((NJS_MATERIAL*)0x0128C194),
	((NJS_MATERIAL*)0x0128BF4C),
	((NJS_MATERIAL*)0x0128BCB4),
	((NJS_MATERIAL*)0x0128BA6C),
	((NJS_MATERIAL*)0x0128B7F4),
	((NJS_MATERIAL*)0x0128B5AC),
	((NJS_MATERIAL*)0x0128B314),
	((NJS_MATERIAL*)0x0128B0CC),
	((NJS_MATERIAL*)0x0128AE34),
	((NJS_MATERIAL*)0x0128ABEC),
	((NJS_MATERIAL*)0x0128A954),
	((NJS_MATERIAL*)0x0128A710),
	//Perfect Chaos main
	((NJS_MATERIAL*)0x013974D0),
	((NJS_MATERIAL*)0x01396AB0),
	((NJS_MATERIAL*)0x01396AC4),
	((NJS_MATERIAL*)0x01396AD8),
	((NJS_MATERIAL*)0x01396AEC),
	((NJS_MATERIAL*)0x01395C64),
	((NJS_MATERIAL*)0x01395C78),
	((NJS_MATERIAL*)0x01395920),
	((NJS_MATERIAL*)0x01395934),
	((NJS_MATERIAL*)0x0139557C),
	((NJS_MATERIAL*)0x01395238),
	((NJS_MATERIAL*)0x0139524C),
	((NJS_MATERIAL*)0x01394E5C),
	((NJS_MATERIAL*)0x01393A70),
	((NJS_MATERIAL*)0x01393A84),
	((NJS_MATERIAL*)0x01393A98),
	((NJS_MATERIAL*)0x01393AAC),
	((NJS_MATERIAL*)0x01393158),
	((NJS_MATERIAL*)0x0139316C),
	((NJS_MATERIAL*)0x01392D30),
	((NJS_MATERIAL*)0x01392D44),
	((NJS_MATERIAL*)0x01392908),
	((NJS_MATERIAL*)0x0139291C),
	((NJS_MATERIAL*)0x013924E0),
	((NJS_MATERIAL*)0x013924F4),
	((NJS_MATERIAL*)0x013920B8),
	((NJS_MATERIAL*)0x013920CC),
	((NJS_MATERIAL*)0x013915D0),
	((NJS_MATERIAL*)0x01390EA8),
	((NJS_MATERIAL*)0x0138F6F8),
	((NJS_MATERIAL*)0x0138F330),
	((NJS_MATERIAL*)0x0138F344),
	((NJS_MATERIAL*)0x0138F150),
	((NJS_MATERIAL*)0x0138EF70),
	((NJS_MATERIAL*)0x0138DE90),
	((NJS_MATERIAL*)0x0138DEA4),
	((NJS_MATERIAL*)0x0138DEB8),
	((NJS_MATERIAL*)0x0138D7E8),
	((NJS_MATERIAL*)0x0138CB90),
	((NJS_MATERIAL*)0x0138CBA4),
	((NJS_MATERIAL*)0x0138C250),
	((NJS_MATERIAL*)0x0138BC50),
	((NJS_MATERIAL*)0x0138BC64),
	((NJS_MATERIAL*)0x0138B248),
	((NJS_MATERIAL*)0x0138AFF0),
	((NJS_MATERIAL*)0x0138A080),
	((NJS_MATERIAL*)0x01389D60),
	((NJS_MATERIAL*)0x01389A98),
	((NJS_MATERIAL*)0x01389630),
	((NJS_MATERIAL*)0x01389644),
	((NJS_MATERIAL*)0x01389368),
	((NJS_MATERIAL*)0x013890A0),
	((NJS_MATERIAL*)0x01388E7C),
	((NJS_MATERIAL*)0x01388B0C),
	((NJS_MATERIAL*)0x01388B20),
	((NJS_MATERIAL*)0x013887CC),
	((NJS_MATERIAL*)0x01388458),
	((NJS_MATERIAL*)0x01388098),
	((NJS_MATERIAL*)0x01387E74),
	((NJS_MATERIAL*)0x01387B04),
	((NJS_MATERIAL*)0x01387B18),
	((NJS_MATERIAL*)0x013877D4),
	((NJS_MATERIAL*)0x013874D0),
	((NJS_MATERIAL*)0x01387168),
	//Perfect Chaos sinking/rising
	((NJS_MATERIAL*)0x01398C98),
	((NJS_MATERIAL*)0x01398CAC),
	((NJS_MATERIAL*)0x01398CC0),
	((NJS_MATERIAL*)0x01398CD4),
	((NJS_MATERIAL*)0x01398CE8),
	((NJS_MATERIAL*)0x01398CFC),
	((NJS_MATERIAL*)0x013975B0),
	((NJS_MATERIAL*)0x013975C4),
	((NJS_MATERIAL*)0x013975D8),
	((NJS_MATERIAL*)0x0269E980),
	((NJS_MATERIAL*)0x0269E994),
	((NJS_MATERIAL*)0x0269E9A8),
	((NJS_MATERIAL*)0x0269E9BC),
	((NJS_MATERIAL*)0x0269E2E8),
	((NJS_MATERIAL*)0x0269E2FC),
	((NJS_MATERIAL*)0x0269E310),
	((NJS_MATERIAL*)0x0269E324),
	((NJS_MATERIAL*)0x0269E158),
	((NJS_MATERIAL*)0x0269DF90),
	((NJS_MATERIAL*)0x0269DC70),
	((NJS_MATERIAL*)0x0269DC84),
	((NJS_MATERIAL*)0x0269DC98),
	((NJS_MATERIAL*)0x0269DA98),
	((NJS_MATERIAL*)0x0269DAAC),
	((NJS_MATERIAL*)0x0269DAC0),
	((NJS_MATERIAL*)0x0269D8D0),
	((NJS_MATERIAL*)0x0269D5B0),
	((NJS_MATERIAL*)0x0269D5C4),
	((NJS_MATERIAL*)0x0269D5D8),
	((NJS_MATERIAL*)0x0269D3D8),
	((NJS_MATERIAL*)0x0269D3EC),
	((NJS_MATERIAL*)0x0269D400),
	((NJS_MATERIAL*)0x0269D248),
};

NJS_MATERIAL* CharacterMaterials_Specular[] = {
	//Eggmobile
	((NJS_MATERIAL*)0x02EE8418),
	((NJS_MATERIAL*)0x02EE842C),
	((NJS_MATERIAL*)0x02EE8440),
	((NJS_MATERIAL*)0x02EE8454),
	((NJS_MATERIAL*)0x02EE8468),
	((NJS_MATERIAL*)0x02EE847C),
	((NJS_MATERIAL*)0x02EE8490),
	((NJS_MATERIAL*)0x02EE84A4),
	((NJS_MATERIAL*)0x02EE84B8),
	((NJS_MATERIAL*)0x02EE84CC),
	((NJS_MATERIAL*)0x02EE84E0),
	((NJS_MATERIAL*)0x02EE84F4),
	((NJS_MATERIAL*)0x02EE8508),
	((NJS_MATERIAL*)0x02EE851C),
	((NJS_MATERIAL*)0x02EE8530),
	((NJS_MATERIAL*)0x02EE8544),
	((NJS_MATERIAL*)0x02EE8558),
	((NJS_MATERIAL*)0x02EE856C),
	((NJS_MATERIAL*)0x02EE8580),
	((NJS_MATERIAL*)0x02EE8594),
	((NJS_MATERIAL*)0x02EE85A8),
	((NJS_MATERIAL*)0x02EE85BC),
	((NJS_MATERIAL*)0x02EE85D0),
	((NJS_MATERIAL*)0x02EE85E4),
	((NJS_MATERIAL*)0x02EE7840),
	((NJS_MATERIAL*)0x02EE7854),
	((NJS_MATERIAL*)0x02EE7868),
	((NJS_MATERIAL*)0x02EE787C),
	((NJS_MATERIAL*)0x02EE7890),
	((NJS_MATERIAL*)0x02EE58C0),
	((NJS_MATERIAL*)0x02EE58D4),
	((NJS_MATERIAL*)0x02EE58E8),
	((NJS_MATERIAL*)0x02EE58FC),
	((NJS_MATERIAL*)0x02EE5910),
	((NJS_MATERIAL*)0x02EE5924),
	((NJS_MATERIAL*)0x02EE5014),
	((NJS_MATERIAL*)0x02EE4B30),
	((NJS_MATERIAL*)0x02EE4410),
	((NJS_MATERIAL*)0x02EE4424),
	((NJS_MATERIAL*)0x02EE4438),
	((NJS_MATERIAL*)0x02EE444C),
	((NJS_MATERIAL*)0x02EE4460),
	((NJS_MATERIAL*)0x02EE41C8),
	((NJS_MATERIAL*)0x02EE3ECC),
	((NJS_MATERIAL*)0x02EE342C),
	((NJS_MATERIAL*)0x02EE2F48),
	((NJS_MATERIAL*)0x02EE2828),
	((NJS_MATERIAL*)0x02EE283C),
	((NJS_MATERIAL*)0x02EE2850),
	((NJS_MATERIAL*)0x02EE2864),
	((NJS_MATERIAL*)0x02EE2878),
	((NJS_MATERIAL*)0x02EE25E0),
	((NJS_MATERIAL*)0x02EE22F4),
	((NJS_MATERIAL*)0x02EE1838),
	((NJS_MATERIAL*)0x02EE15B8),
	((NJS_MATERIAL*)0x02EE12FC),
	((NJS_MATERIAL*)0x02EE1210),
	((NJS_MATERIAL*)0x02EE1110),
	((NJS_MATERIAL*)0x02EE1124),
	((NJS_MATERIAL*)0x02EE0FE8),
	((NJS_MATERIAL*)0x02EE0FFC),
	((NJS_MATERIAL*)0x02EE1010),
	((NJS_MATERIAL*)0x02EE1024),
	((NJS_MATERIAL*)0x02EE0ED4),
	((NJS_MATERIAL*)0x02EE0EE8),
	((NJS_MATERIAL*)0x02EE0EFC),
	((NJS_MATERIAL*)0x02EE0DE8),
	((NJS_MATERIAL*)0x02EE0CE8),
	((NJS_MATERIAL*)0x02EE0CFC),
	((NJS_MATERIAL*)0x02EE0BC0),
	((NJS_MATERIAL*)0x02EE0BD4),
	((NJS_MATERIAL*)0x02EE0BE8),
	((NJS_MATERIAL*)0x02EE0BFC),
	((NJS_MATERIAL*)0x02EE0AAC),
	((NJS_MATERIAL*)0x02EE0AC0),
	((NJS_MATERIAL*)0x02EE0AD4),
	//Policemen
	((NJS_MATERIAL*)0x0337B250),
	((NJS_MATERIAL*)0x0337AFAC),
	((NJS_MATERIAL*)0x0337AE6C),
	((NJS_MATERIAL*)0x0337AB84),
	((NJS_MATERIAL*)0x0337A6B0),
	((NJS_MATERIAL*)0x0337A518),
	((NJS_MATERIAL*)0x0337A1F8),
	((NJS_MATERIAL*)0x03379F54),
	((NJS_MATERIAL*)0x03379E14),
	((NJS_MATERIAL*)0x03379B28),
	((NJS_MATERIAL*)0x03379320),
	((NJS_MATERIAL*)0x03379334),
	((NJS_MATERIAL*)0x03379348),
	((NJS_MATERIAL*)0x03379080),
	((NJS_MATERIAL*)0x03379094),
	((NJS_MATERIAL*)0x033787A8),
	((NJS_MATERIAL*)0x033787BC),
	((NJS_MATERIAL*)0x033787D0),
	((NJS_MATERIAL*)0x03378628),
	((NJS_MATERIAL*)0x033784A8),
	((NJS_MATERIAL*)0x03378318),
	((NJS_MATERIAL*)0x03377FCC),
	((NJS_MATERIAL*)0x03377B24),
	((NJS_MATERIAL*)0x03377B38),
	((NJS_MATERIAL*)0x03377628),
	((NJS_MATERIAL*)0x0337763C),
	((NJS_MATERIAL*)0x033774E8),
	((NJS_MATERIAL*)0x03377240),
	((NJS_MATERIAL*)0x03377100),
	((NJS_MATERIAL*)0x03376FB0),
	((NJS_MATERIAL*)0x03376BA4),
	((NJS_MATERIAL*)0x03376BB8),
	((NJS_MATERIAL*)0x033766A8),
	((NJS_MATERIAL*)0x033766BC),
	((NJS_MATERIAL*)0x03376568),
	((NJS_MATERIAL*)0x033762C0),
	((NJS_MATERIAL*)0x03376180),
};

NJS_MATERIAL* CharacterMaterials[] = {
	//Chaos0 cutscene
	((NJS_MATERIAL*)0x02C65E64),
	((NJS_MATERIAL*)0x02C61D30),
	((NJS_MATERIAL*)0x02C61D44),
	((NJS_MATERIAL*)0x02C615F8),
	((NJS_MATERIAL*)0x02C6160C),
	((NJS_MATERIAL*)0x02C60F30),
	((NJS_MATERIAL*)0x02C607E4),
	((NJS_MATERIAL*)0x02C607F8),
	((NJS_MATERIAL*)0x02C6080C),
	((NJS_MATERIAL*)0x02C60408),
	((NJS_MATERIAL*)0x02C600D8),
	((NJS_MATERIAL*)0x02C5F8EC),
	((NJS_MATERIAL*)0x02C5F64C),
	((NJS_MATERIAL*)0x02C5F264),
	((NJS_MATERIAL*)0x02C5EEF0),
	((NJS_MATERIAL*)0x02C5EBC0),
	((NJS_MATERIAL*)0x02C5E3D4),
	((NJS_MATERIAL*)0x02C5E134),
	((NJS_MATERIAL*)0x02C5DD4C),
	((NJS_MATERIAL*)0x02C5C904),
	((NJS_MATERIAL*)0x02C5C228),
	((NJS_MATERIAL*)0x02C5BF34),
	((NJS_MATERIAL*)0x02C5B8EC),
	((NJS_MATERIAL*)0x02C5B648),
	((NJS_MATERIAL*)0x02C5B3D8),
	((NJS_MATERIAL*)0x02C5AB28),
	((NJS_MATERIAL*)0x02C5A834),
	((NJS_MATERIAL*)0x02C5A1EC),
	((NJS_MATERIAL*)0x02C59F48),
	((NJS_MATERIAL*)0x02C59CD8),
	/*//Eggman
	((NJS_MATERIAL*)0x02EE8418),
	((NJS_MATERIAL*)0x02EE842C),
	((NJS_MATERIAL*)0x02EE8440),
	((NJS_MATERIAL*)0x02EE8454),
	((NJS_MATERIAL*)0x02EE8468),
	((NJS_MATERIAL*)0x02EE847C),
	((NJS_MATERIAL*)0x02EE8490),
	((NJS_MATERIAL*)0x02EE84A4),
	((NJS_MATERIAL*)0x02EE84B8),
	((NJS_MATERIAL*)0x02EE84CC),
	((NJS_MATERIAL*)0x02EE84E0),
	((NJS_MATERIAL*)0x02EE84F4),
	((NJS_MATERIAL*)0x02EE8508),
	((NJS_MATERIAL*)0x02EE851C),
	((NJS_MATERIAL*)0x02EE8530),
	((NJS_MATERIAL*)0x02EE8544),
	((NJS_MATERIAL*)0x02EE8558),
	((NJS_MATERIAL*)0x02EE856C),
	((NJS_MATERIAL*)0x02EE8580),
	((NJS_MATERIAL*)0x02EE8594),
	((NJS_MATERIAL*)0x02EE85A8),
	((NJS_MATERIAL*)0x02EE85BC),
	((NJS_MATERIAL*)0x02EE85D0),
	((NJS_MATERIAL*)0x02EE85E4),
	((NJS_MATERIAL*)0x02EE7840),
	((NJS_MATERIAL*)0x02EE7854),
	((NJS_MATERIAL*)0x02EE7868),
	((NJS_MATERIAL*)0x02EE787C),
	((NJS_MATERIAL*)0x02EE7890),
	((NJS_MATERIAL*)0x02EE58C0),
	((NJS_MATERIAL*)0x02EE58D4),
	((NJS_MATERIAL*)0x02EE58E8),
	((NJS_MATERIAL*)0x02EE58FC),
	((NJS_MATERIAL*)0x02EE5910),
	((NJS_MATERIAL*)0x02EE5924),
	((NJS_MATERIAL*)0x02EE5014),
	((NJS_MATERIAL*)0x02EE4B30),
	((NJS_MATERIAL*)0x02EE4410),
	((NJS_MATERIAL*)0x02EE4424),
	((NJS_MATERIAL*)0x02EE4438),
	((NJS_MATERIAL*)0x02EE444C),
	((NJS_MATERIAL*)0x02EE4460),
	((NJS_MATERIAL*)0x02EE41C8),
	((NJS_MATERIAL*)0x02EE3ECC),
	((NJS_MATERIAL*)0x02EE342C),
	((NJS_MATERIAL*)0x02EE2F48),
	((NJS_MATERIAL*)0x02EE2828),
	((NJS_MATERIAL*)0x02EE283C),
	((NJS_MATERIAL*)0x02EE2850),
	((NJS_MATERIAL*)0x02EE2864),
	((NJS_MATERIAL*)0x02EE2878),
	((NJS_MATERIAL*)0x02EE25E0),
	((NJS_MATERIAL*)0x02EE22F4),
	((NJS_MATERIAL*)0x02EE1838),
	((NJS_MATERIAL*)0x02EE15B8),
	((NJS_MATERIAL*)0x02EE12FC),
	((NJS_MATERIAL*)0x02EE1210),
	((NJS_MATERIAL*)0x02EE1110),
	((NJS_MATERIAL*)0x02EE1124),
	((NJS_MATERIAL*)0x02EE0FE8),
	((NJS_MATERIAL*)0x02EE0FFC),
	((NJS_MATERIAL*)0x02EE1010),
	((NJS_MATERIAL*)0x02EE1024),
	((NJS_MATERIAL*)0x02EE0ED4),
	((NJS_MATERIAL*)0x02EE0EE8),
	((NJS_MATERIAL*)0x02EE0EFC),
	((NJS_MATERIAL*)0x02EE0DE8),
	((NJS_MATERIAL*)0x02EE0CE8),
	((NJS_MATERIAL*)0x02EE0CFC),
	((NJS_MATERIAL*)0x02EE0BC0),
	((NJS_MATERIAL*)0x02EE0BD4),
	((NJS_MATERIAL*)0x02EE0BE8),
	((NJS_MATERIAL*)0x02EE0BFC),
	((NJS_MATERIAL*)0x02EE0AAC),
	((NJS_MATERIAL*)0x02EE0AC0),
	((NJS_MATERIAL*)0x02EE0AD4),*/
};



NJS_MATERIAL* Chaos6ObjectMaterials[] = {
	//Egg Viper platforms
	((NJS_MATERIAL*)0x01672848),
	((NJS_MATERIAL*)0x0167285C),
	((NJS_MATERIAL*)0x01672870),
	((NJS_MATERIAL*)0x01672884),
	((NJS_MATERIAL*)0x01672898),
	((NJS_MATERIAL*)0x016728AC),
	((NJS_MATERIAL*)0x016728C0),
	((NJS_MATERIAL*)0x01671BD8),
	((NJS_MATERIAL*)0x01671BEC),
	((NJS_MATERIAL*)0x01671C00),
	((NJS_MATERIAL*)0x01671C14),
	((NJS_MATERIAL*)0x01671C28),
	((NJS_MATERIAL*)0x01671C3C),
	((NJS_MATERIAL*)0x01671C50),

	((NJS_MATERIAL*)0x0166FE18),
	((NJS_MATERIAL*)0x0166FE2C),
	((NJS_MATERIAL*)0x0166FE40),
	((NJS_MATERIAL*)0x0166FE54),
	((NJS_MATERIAL*)0x0166FE68),
	((NJS_MATERIAL*)0x0166FE7C),
	((NJS_MATERIAL*)0x0166FE90),
	((NJS_MATERIAL*)0x0166FA48),
	((NJS_MATERIAL*)0x0166F728),
	((NJS_MATERIAL*)0x0166F73C),
	((NJS_MATERIAL*)0x0166F750),
	((NJS_MATERIAL*)0x0166F764),
	((NJS_MATERIAL*)0x0166F778),
	((NJS_MATERIAL*)0x0166F78C),
	((NJS_MATERIAL*)0x0166EF08),
	((NJS_MATERIAL*)0x0166EF1C),
	((NJS_MATERIAL*)0x0166EF30),
	((NJS_MATERIAL*)0x0166EF44),
	((NJS_MATERIAL*)0x0166EF58),
	((NJS_MATERIAL*)0x0166EF6C),
	((NJS_MATERIAL*)0x0166EF80),
	((NJS_MATERIAL*)0x0166EF94),
	((NJS_MATERIAL*)0x016714D0),
	((NJS_MATERIAL*)0x016714E4),
	((NJS_MATERIAL*)0x016714F8),
	((NJS_MATERIAL*)0x0167150C),
	((NJS_MATERIAL*)0x01671520),
	((NJS_MATERIAL*)0x01671534),
	((NJS_MATERIAL*)0x01671548),
	((NJS_MATERIAL*)0x01671100),
	((NJS_MATERIAL*)0x01670A70),
	((NJS_MATERIAL*)0x01670A84),
	((NJS_MATERIAL*)0x01670A98),
	((NJS_MATERIAL*)0x01670AAC),
	((NJS_MATERIAL*)0x01670AC0),
	((NJS_MATERIAL*)0x01670AD4),
	((NJS_MATERIAL*)0x01670AE8),
	((NJS_MATERIAL*)0x01670250),
	((NJS_MATERIAL*)0x01670264),
	((NJS_MATERIAL*)0x01670278),
	((NJS_MATERIAL*)0x0167028C),
	((NJS_MATERIAL*)0x016702A0),
	((NJS_MATERIAL*)0x016702B4),
	((NJS_MATERIAL*)0x016702C8),
	((NJS_MATERIAL*)0x016702DC),


	//Zero
	((NJS_MATERIAL*)0x00990FE0),
	((NJS_MATERIAL*)0x00990FF4),
	((NJS_MATERIAL*)0x00990BC0),
	((NJS_MATERIAL*)0x00990BD4),
	((NJS_MATERIAL*)0x00990BE8),
	((NJS_MATERIAL*)0x00990BFC),
	((NJS_MATERIAL*)0x00990C10),
	((NJS_MATERIAL*)0x00990420),
	((NJS_MATERIAL*)0x00990434),
	((NJS_MATERIAL*)0x00990448),
	((NJS_MATERIAL*)0x0099045C),
	((NJS_MATERIAL*)0x00990470),
	((NJS_MATERIAL*)0x0098FC60),
	((NJS_MATERIAL*)0x0098FC74),
	((NJS_MATERIAL*)0x0098F558),
	((NJS_MATERIAL*)0x0098F56C),
	((NJS_MATERIAL*)0x0098F580),
	((NJS_MATERIAL*)0x0098F594),
	((NJS_MATERIAL*)0x0098F5A8),
	((NJS_MATERIAL*)0x0098F5BC),
	((NJS_MATERIAL*)0x0098EE50),
	((NJS_MATERIAL*)0x0098EE64),
	((NJS_MATERIAL*)0x0098EE78),
	((NJS_MATERIAL*)0x0098EE8C),
	((NJS_MATERIAL*)0x0098EEA0),
	((NJS_MATERIAL*)0x0098EEB4),
	((NJS_MATERIAL*)0x0098D218),
	((NJS_MATERIAL*)0x0098D22C),
	((NJS_MATERIAL*)0x0098D240),
	((NJS_MATERIAL*)0x0098D254),
	((NJS_MATERIAL*)0x0098D268),
	((NJS_MATERIAL*)0x0098D27C),
	((NJS_MATERIAL*)0x0098D290),
	((NJS_MATERIAL*)0x0098D2A4),
	((NJS_MATERIAL*)0x0098D2B8),
	((NJS_MATERIAL*)0x0098D2CC),
	((NJS_MATERIAL*)0x0098D2E0),
	((NJS_MATERIAL*)0x0098D2F4),
	((NJS_MATERIAL*)0x0098D308),
	((NJS_MATERIAL*)0x0098D31C),
	((NJS_MATERIAL*)0x0098D330),
	((NJS_MATERIAL*)0x0098CE30),
	((NJS_MATERIAL*)0x0098CE44),
	((NJS_MATERIAL*)0x0098CB90),
	((NJS_MATERIAL*)0x0098CBA4),
	((NJS_MATERIAL*)0x0098C868),
	((NJS_MATERIAL*)0x0098C87C),
	((NJS_MATERIAL*)0x0098C890),
	((NJS_MATERIAL*)0x0098C550),
	((NJS_MATERIAL*)0x0098C564),
	((NJS_MATERIAL*)0x0098C578),
	((NJS_MATERIAL*)0x0098C140),
	((NJS_MATERIAL*)0x0098C154),
	((NJS_MATERIAL*)0x0098C168),
	((NJS_MATERIAL*)0x0098BF50),
	((NJS_MATERIAL*)0x0098BDA4),
	((NJS_MATERIAL*)0x0098B9C0),
	((NJS_MATERIAL*)0x0098B9D4),
	((NJS_MATERIAL*)0x0098B720),
	((NJS_MATERIAL*)0x0098B734),
	((NJS_MATERIAL*)0x0098B3F8),
	((NJS_MATERIAL*)0x0098B40C),
	((NJS_MATERIAL*)0x0098B420),
	((NJS_MATERIAL*)0x0098B0E0),
	((NJS_MATERIAL*)0x0098B0F4),
	((NJS_MATERIAL*)0x0098B108),
	((NJS_MATERIAL*)0x0098ACD0),
	((NJS_MATERIAL*)0x0098ACE4),
	((NJS_MATERIAL*)0x0098ACF8),
	((NJS_MATERIAL*)0x0098AAE0),
	((NJS_MATERIAL*)0x0098A924),
	((NJS_MATERIAL*)0x0098A2B0),
	((NJS_MATERIAL*)0x0098A2C4),
	((NJS_MATERIAL*)0x0098A2D8),
	((NJS_MATERIAL*)0x0098A2EC),
	((NJS_MATERIAL*)0x0098A300),
	((NJS_MATERIAL*)0x00989F70),
	((NJS_MATERIAL*)0x00989F84),
	((NJS_MATERIAL*)0x00989F98),
	((NJS_MATERIAL*)0x00989C30),
	((NJS_MATERIAL*)0x00989C44),
	((NJS_MATERIAL*)0x00989C58),
	((NJS_MATERIAL*)0x009899C0),
	((NJS_MATERIAL*)0x009899D4),
	((NJS_MATERIAL*)0x00989750),
	((NJS_MATERIAL*)0x00989764),
	//E101
	((NJS_MATERIAL*)0x014DDB58),
	((NJS_MATERIAL*)0x014DDB6C),
	((NJS_MATERIAL*)0x014DDB80),
	((NJS_MATERIAL*)0x014DD9D0),
	((NJS_MATERIAL*)0x014DD704),
	((NJS_MATERIAL*)0x014DD718),
	((NJS_MATERIAL*)0x014DD4D8),
	((NJS_MATERIAL*)0x014DD4EC),
	((NJS_MATERIAL*)0x014DD1A8),
	((NJS_MATERIAL*)0x014DD1BC),
	((NJS_MATERIAL*)0x014DD1D0),
	((NJS_MATERIAL*)0x014DD018),
	((NJS_MATERIAL*)0x014DCD60),
	((NJS_MATERIAL*)0x014DCD74),
	((NJS_MATERIAL*)0x014DC910),
	((NJS_MATERIAL*)0x014DC924),
	((NJS_MATERIAL*)0x014DC938),
	((NJS_MATERIAL*)0x014DC788),
	((NJS_MATERIAL*)0x014DC4BC),
	((NJS_MATERIAL*)0x014DC4D0),
	((NJS_MATERIAL*)0x014DC290),
	((NJS_MATERIAL*)0x014DC2A4),
	((NJS_MATERIAL*)0x014DBF60),
	((NJS_MATERIAL*)0x014DBF74),
	((NJS_MATERIAL*)0x014DBF88),
	((NJS_MATERIAL*)0x014DBDD0),
	((NJS_MATERIAL*)0x014DBB14),
	((NJS_MATERIAL*)0x014DBB28),
	((NJS_MATERIAL*)0x014DAC88),
	((NJS_MATERIAL*)0x014DAC9C),
	((NJS_MATERIAL*)0x014DACB0),
	((NJS_MATERIAL*)0x014DACC4),
	((NJS_MATERIAL*)0x014DACD8),
	((NJS_MATERIAL*)0x014DACEC),
	((NJS_MATERIAL*)0x014DAD00),
	((NJS_MATERIAL*)0x014DA548),
	((NJS_MATERIAL*)0x014DA55C),
	((NJS_MATERIAL*)0x014DA570),
	((NJS_MATERIAL*)0x014DA584),
	((NJS_MATERIAL*)0x014DA598),
	((NJS_MATERIAL*)0x014DA290),
	((NJS_MATERIAL*)0x014DA0FC),
	((NJS_MATERIAL*)0x014D99C0),
	((NJS_MATERIAL*)0x014D99D4),
	((NJS_MATERIAL*)0x014D99E8),
	((NJS_MATERIAL*)0x014D99FC),
	((NJS_MATERIAL*)0x014D9A10),
	((NJS_MATERIAL*)0x014D96A0),
	((NJS_MATERIAL*)0x014D950C),
	((NJS_MATERIAL*)0x014D88B0),
	((NJS_MATERIAL*)0x014D88C4),
	((NJS_MATERIAL*)0x014D88D8),
	((NJS_MATERIAL*)0x014D88EC),
	((NJS_MATERIAL*)0x014D8900),
	((NJS_MATERIAL*)0x014D8914),
	((NJS_MATERIAL*)0x014D8928),
	((NJS_MATERIAL*)0x014D893C),
	((NJS_MATERIAL*)0x014D85B0),
	((NJS_MATERIAL*)0x014D85C4),
	((NJS_MATERIAL*)0x014D8184),
	((NJS_MATERIAL*)0x014D8198),
	((NJS_MATERIAL*)0x014D81AC),
	((NJS_MATERIAL*)0x014D79F4),
	((NJS_MATERIAL*)0x014D67B0),
	((NJS_MATERIAL*)0x014D67C4),
	((NJS_MATERIAL*)0x014D67D8),
	((NJS_MATERIAL*)0x014D67EC),
	((NJS_MATERIAL*)0x014D6800),
	((NJS_MATERIAL*)0x014D6538),
	((NJS_MATERIAL*)0x014D654C),
	((NJS_MATERIAL*)0x014D6128),
	((NJS_MATERIAL*)0x014D613C),
	((NJS_MATERIAL*)0x014D6150),
	((NJS_MATERIAL*)0x014D6164),
	((NJS_MATERIAL*)0x014D5EB0),
	//Lilypad
	((NJS_MATERIAL*)0x011E2C00),
	((NJS_MATERIAL*)0x011E2C14),
	//Chandelier
	((NJS_MATERIAL*)0x0117C940),
	((NJS_MATERIAL*)0x0117C954),
	((NJS_MATERIAL*)0x0117C968),
	((NJS_MATERIAL*)0x0117C97C),
	((NJS_MATERIAL*)0x0117C990),
	((NJS_MATERIAL*)0x0117C9A4),
	((NJS_MATERIAL*)0x0117C9B8),
	((NJS_MATERIAL*)0x0117C9CC),
	//Police car
	&matlist_00059C1C[0],
	&matlist_0005C1A4[0],
	&matlist_0005C1A4[1],
	&matlist_0005C1A4[2],
	&matlist_000597E4[0],
	&matlist_000597E4[1],
	&matlist_000597E4[2],
	&matlist_00058C88[0],
	&matlist_00058C88[1],
	&matlist_0005A21C[0],
	&matlist_00059F30[0],
	&matlist_0005BAA0[0],
	&matlist_0005BAA0[1],
	//Helicopter
	&matlist_00056E10[0],
	&matlist_00056E10[1],
	&matlist_00056E10[2],
	//Chaos 6 freezer
	((NJS_MATERIAL*)0x01383718),
	((NJS_MATERIAL*)0x0138372C),
	((NJS_MATERIAL*)0x01383740),
	((NJS_MATERIAL*)0x01383754),
	((NJS_MATERIAL*)0x01383768),
	((NJS_MATERIAL*)0x0138377C),
	((NJS_MATERIAL*)0x01383498),
	((NJS_MATERIAL*)0x01383008),
	((NJS_MATERIAL*)0x0138301C),
	((NJS_MATERIAL*)0x01383030),
	((NJS_MATERIAL*)0x01382B60),
	((NJS_MATERIAL*)0x01382B74),
	((NJS_MATERIAL*)0x01382B88),
	((NJS_MATERIAL*)0x01382A24),
	((NJS_MATERIAL*)0x01382808),
	((NJS_MATERIAL*)0x013826CC),
	((NJS_MATERIAL*)0x013824B0),
	((NJS_MATERIAL*)0x013821C0),
};

NJS_MATERIAL* EggHornetMaterials[] = {
	((NJS_MATERIAL*)0x0155EDB4),
	((NJS_MATERIAL*)0x0155EDC8),
	((NJS_MATERIAL*)0x0155EDDC),
	((NJS_MATERIAL*)0x0155EDF0),
	((NJS_MATERIAL*)0x0155EE04),
	((NJS_MATERIAL*)0x0155EE18),
	((NJS_MATERIAL*)0x0155EE2C),
	((NJS_MATERIAL*)0x0155EE40),
	((NJS_MATERIAL*)0x0155EE54),
	((NJS_MATERIAL*)0x0155EE68),
	((NJS_MATERIAL*)0x0155EE7C),
	((NJS_MATERIAL*)0x0155EE90),
	((NJS_MATERIAL*)0x0155EEA4),
	((NJS_MATERIAL*)0x0155EEB8),
	((NJS_MATERIAL*)0x0155EECC),
	((NJS_MATERIAL*)0x0155EEE0),
	((NJS_MATERIAL*)0x0155EEF4),
	((NJS_MATERIAL*)0x0155EF08),
	((NJS_MATERIAL*)0x0155EF1C),
	((NJS_MATERIAL*)0x0155EF30),
	((NJS_MATERIAL*)0x0155EAA0),
	((NJS_MATERIAL*)0x0155EAB4),
	((NJS_MATERIAL*)0x0155DEE0),
	((NJS_MATERIAL*)0x0155DEF4),
	((NJS_MATERIAL*)0x0155DF08),
	((NJS_MATERIAL*)0x0155DF1C),
	((NJS_MATERIAL*)0x0155DF30),
	((NJS_MATERIAL*)0x0155DF44),
	((NJS_MATERIAL*)0x0155DF58),
	((NJS_MATERIAL*)0x0155DF6C),
	((NJS_MATERIAL*)0x0155DD00),
	((NJS_MATERIAL*)0x0155DD14),
	((NJS_MATERIAL*)0x0155D608),
	((NJS_MATERIAL*)0x0155D61C),
	((NJS_MATERIAL*)0x0155D630),
	((NJS_MATERIAL*)0x0155D644),
	((NJS_MATERIAL*)0x0155D658),
	((NJS_MATERIAL*)0x0155D66C),
	((NJS_MATERIAL*)0x0155D1B4),
	((NJS_MATERIAL*)0x0155D1C8),
	((NJS_MATERIAL*)0x0155CEB8),
	((NJS_MATERIAL*)0x0155CECC),
	((NJS_MATERIAL*)0x0155C2F8),
	((NJS_MATERIAL*)0x0155C30C),
	((NJS_MATERIAL*)0x0155C320),
	((NJS_MATERIAL*)0x0155C334),
	((NJS_MATERIAL*)0x0155C348),
	((NJS_MATERIAL*)0x0155C35C),
	((NJS_MATERIAL*)0x0155C370),
	((NJS_MATERIAL*)0x0155C384),
	((NJS_MATERIAL*)0x0155C118),
	((NJS_MATERIAL*)0x0155C12C),
	((NJS_MATERIAL*)0x0155BA20),
	((NJS_MATERIAL*)0x0155BA34),
	((NJS_MATERIAL*)0x0155BA48),
	((NJS_MATERIAL*)0x0155BA5C),
	((NJS_MATERIAL*)0x0155BA70),
	((NJS_MATERIAL*)0x0155BA84),
	((NJS_MATERIAL*)0x0155B5D0),
	((NJS_MATERIAL*)0x0155B5E4),
	((NJS_MATERIAL*)0x0155B5F8),
	((NJS_MATERIAL*)0x0155B178),
	((NJS_MATERIAL*)0x0155B18C),
	((NJS_MATERIAL*)0x0155B1A0),
	((NJS_MATERIAL*)0x0155B1B4),
	((NJS_MATERIAL*)0x0155B1C8),
	((NJS_MATERIAL*)0x0155AA88),
	((NJS_MATERIAL*)0x0155AA9C),
	((NJS_MATERIAL*)0x0155AAB0),
	((NJS_MATERIAL*)0x0155AAC4),
	((NJS_MATERIAL*)0x0155AAD8),
	((NJS_MATERIAL*)0x0155A320),
	((NJS_MATERIAL*)0x0155A334),
	((NJS_MATERIAL*)0x0155A348),
	((NJS_MATERIAL*)0x0155A35C),
	((NJS_MATERIAL*)0x0155A370),
	((NJS_MATERIAL*)0x0155A384),
	((NJS_MATERIAL*)0x0155A398),
	((NJS_MATERIAL*)0x0155A218),
	//Eggman
	((NJS_MATERIAL*)0x01565110),
	((NJS_MATERIAL*)0x01565124),
	((NJS_MATERIAL*)0x01565138),
	((NJS_MATERIAL*)0x0156514C),
	((NJS_MATERIAL*)0x01565160),
	((NJS_MATERIAL*)0x01565174),
	((NJS_MATERIAL*)0x01564078),
	((NJS_MATERIAL*)0x0156408C),
	((NJS_MATERIAL*)0x015640A0),
	((NJS_MATERIAL*)0x015640B4),
	((NJS_MATERIAL*)0x015640C8),
	((NJS_MATERIAL*)0x015640DC),
	((NJS_MATERIAL*)0x01563DAC),
	((NJS_MATERIAL*)0x01563AD0),
	((NJS_MATERIAL*)0x01563648),
	((NJS_MATERIAL*)0x0156365C),
	((NJS_MATERIAL*)0x01563670),
	((NJS_MATERIAL*)0x01563684),
	((NJS_MATERIAL*)0x01563698),
	((NJS_MATERIAL*)0x01563438),
	((NJS_MATERIAL*)0x0156344C),
	((NJS_MATERIAL*)0x01563460),
	((NJS_MATERIAL*)0x015632C0),
	((NJS_MATERIAL*)0x015630B4),
	((NJS_MATERIAL*)0x015630C8),
	((NJS_MATERIAL*)0x01562DD8),
	((NJS_MATERIAL*)0x01562950),
	((NJS_MATERIAL*)0x01562964),
	((NJS_MATERIAL*)0x01562978),
	((NJS_MATERIAL*)0x0156298C),
	((NJS_MATERIAL*)0x015629A0),
	((NJS_MATERIAL*)0x01562740),
	((NJS_MATERIAL*)0x01562754),
	((NJS_MATERIAL*)0x01562768),
	((NJS_MATERIAL*)0x015625C8),
	((NJS_MATERIAL*)0x015623BC),
	((NJS_MATERIAL*)0x015623D0),
	((NJS_MATERIAL*)0x01562204),
};