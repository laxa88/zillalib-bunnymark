#include "include.h"

#define ZL_OPT_DO_IMPLEMENTATION
#include <../Opt/ZL_TouchInput.h>

static struct sZillaBunnyMark : public ZL_Application
{
	sZillaBunnyMark() : ZL_Application(60) { }

	virtual void Load(int argc, char *argv[])
	{
		if (!ZL_Application::LoadReleaseDesktopDataBundle()) return;
		if (!ZL_Display::Init("Zilla Bunny Mark", 1280, 720, ZL_DISPLAY_ALLOWRESIZEHORIZONTAL)) return;
		ZL_Display::ClearFill(ZL_Color::White);
		ZL_Display::SetAA(true);
		ZL_Audio::Init();
		ZL_Application::SettingsInit("ZillaBunnyMark");
		
		ZL_SceneManager::Init(SCENE_GAME);
	}
} ZillaBunnyMark;
