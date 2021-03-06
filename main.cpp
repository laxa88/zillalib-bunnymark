#include "include.h"
#include "BunnyMark.h"

ZL_Font fnt;

struct sZillaBunnyMark : public ZL_Application
{
	sZillaBunnyMark() : ZL_Application(60) {}

	void Load(int argc, char *argv[])
	{
		ZL_Display::Init("Zilla Bunny Mark", 780, 600);
		ZL_Display::sigPointerDown.connect(this, &sZillaBunnyMark::onPointerDown);
		ZL_Display::sigPointerUp.connect(this, &sZillaBunnyMark::onPointerUp);
		ZL_Display::sigKeyDown.connect(this, &sZillaBunnyMark ::OnKeyDown);
		ZL_Display::SetAA(false);
		ZL_Input::Init();

		BunnyMark::Init(2000);

		fnt = ZL_Font("Data/gbfont.png");
		fnt.SetColor(ZL_Color::DarkGreen);
	}

	void BeforeFrame()
	{
		BunnyMark::Update();
	}

	void AfterFrame()
	{
		ZL_Display::ClearFill(ZL_Color::White);
		fnt.Draw(8, ZLHEIGHT - 8, ZL_String::format("Bunnies: %d", BunnyMark::nCount), ZL_Origin::TopLeft);
		if (ZL_Application::Ticks > 1000) {
			fnt.Draw(8, ZLHEIGHT - 16, ZL_String::format("FPS: %d - AVGFPS: %d", FPS, FrameCount / (Ticks / 1000)), ZL_Origin::TopLeft);
		}
		BunnyMark::Draw();
	}

	void onPointerDown(ZL_PointerPressEvent &e)
	{
		BunnyMark::StartAdding();
	}

	void onPointerUp(ZL_PointerPressEvent &e)
	{
		BunnyMark::StopAdding();
	}

	void OnKeyDown(ZL_KeyboardEvent &e)
	{
		if (e.key == ZLK_SPACE || e.key == ZLK_RETURN)
		{
			BunnyMark::Reset();
		}
	}
} ZillaBunnyMark;
