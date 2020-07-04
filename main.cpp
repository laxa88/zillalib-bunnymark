#include "include.h"
#include "BunnyMark.h"

ZL_Font fnt;

struct sZillaBunnyMark : public ZL_Application
{
	BunnyMark bunny;

	void Load(int argc, char *argv[])
	{
		ZL_Display::Init("Zilla Bunny Mark", 800, 800);
		ZL_Display::sigPointerDown.connect(this, &sZillaBunnyMark::onPointerDown);
		ZL_Display::sigPointerUp.connect(this, &sZillaBunnyMark::onPointerUp);
		ZL_Display::SetAA(false);

		ZL_Input::Init();

		bunny = BunnyMark();

		fnt = ZL_Font("Data/gbfont.png");
	}

	void BeforeFrame()
	{
		bunny.Update();
	}

	void AfterFrame()
	{
		ZL_Display::ClearFill(ZL_Color::Gray);
		fnt.Draw(8, ZLHEIGHT-8, ZL_String::format("Elapsed: %f\nBunnies: %d", ZLSECONDS, bunny.nBunnies), ZL_Origin::TopLeft);
	}

	void onPointerDown(ZL_PointerPressEvent& e)
	{
		ZL_LOG("DEBUG", "pointer down");
	}

	void onPointerUp(ZL_PointerPressEvent& e)
	{
		ZL_LOG("DEBUG", "pointer up");
	}
} ZillaBunnyMark;
