#include "include.h"

#include "Bunny.h"

ZL_Font fnt;
ZL_Surface srfBunnyTiles;

struct sZillaBunnyMark : public ZL_Application
{
	void Load(int argc, char *argv[])
	{
		ZL_Display::Init("Zilla Bunny Mark", 800, 800);
		ZL_Display::sigPointerDown.connect(this, &sZillaBunnyMark::onPointerDown);
		ZL_Display::sigPointerUp.connect(this, &sZillaBunnyMark::onPointerUp);
		ZL_Display::SetAA(false);

		ZL_Input::Init();

		fnt = ZL_Font("Data/gbfont.png");
		srfBunnyTiles = ZL_Surface("Data/lineup.png");
		srfBunnyTiles.SetTextureFilterMode(false, false);
		srfBunnyTiles.SetTilesetClipping(35, 36);
	}

	void AfterFrame()
	{
		ZL_Display::ClearFill(ZL_Color::Gray);
		fnt.Draw(8, ZLHEIGHT-8, ZL_String::format("Elapsed: %f", ZLSECONDS), ZL_Origin::TopLeft);
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
