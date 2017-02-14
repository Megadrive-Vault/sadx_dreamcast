#include "stdafx.h"
#include "SADXModLoader.h"
static int PreviousLevel = -1;
static int NewDayTime = 0;

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (IsAdventureComplete(CurrentCharacter) && PreviousLevel != CurrentLevel)
		{
			if (PreviousLevel == 33 && CurrentLevel == 26 || PreviousLevel == 26 && CurrentLevel == 33)
			{
				NewDayTime = GetTimeOfDay() + 1;
				if (NewDayTime > 2) NewDayTime = 0;
				SetTimeOfDay(NewDayTime);
			}
			PreviousLevel = CurrentLevel;
		}
	}
	}