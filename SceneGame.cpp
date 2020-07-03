#include "include.h"

static struct sSceneGame : public ZL_Scene
{
	sSceneGame() : ZL_Scene(SCENE_GAME) { }

	void InitGlobal()
	{
	}

	void StartGame()
	{
	}

	void InitAfterTransition()
	{
		ZL_Display::sigPointerDown.connect(this, &sSceneGame::OnPointerDown);
		ZL_Display::sigPointerUp.connect(this, &sSceneGame::OnPointerUp);
		ZL_Display::sigPointerMove.connect(this, &sSceneGame::OnPointerMove);
		ZL_Display::sigKeyDown.connect(this, &sSceneGame::OnKeyDown);
		ZL_Display::sigKeyUp.connect(this, &sSceneGame::OnKeyUp);
		ZL_Display::sigActivated.connect(this, &sSceneGame::OnActivated);
		StartGame();
	}

	void DeInitLeave(ZL_SceneType SceneTypeTo)
	{
		ZL_Display::AllSigDisconnect(this);
	}

	void OnPointerDown(ZL_PointerPressEvent& e)
	{
	}

	void OnPointerUp(ZL_PointerPressEvent& e)
	{
	}

	void OnPointerMove(ZL_PointerMoveEvent& e)
	{
	}

	void OnKeyDown(ZL_KeyboardEvent& e)
	{
		if (e.key == ZLK_ESCAPE) ZL_Application::Quit();
	}

	void OnKeyUp(ZL_KeyboardEvent& e)
	{
	}

	void OnActivated(ZL_WindowActivateEvent& e)
	{
	}

	void Calculate()
	{
	}

	void Draw()
	{
		ZL_Display::FillGradient(0, 0, ZLWIDTH, ZLHEIGHT, ZLRGB(0,0,.3), ZLRGB(0,0,.3), ZLRGB(.4,.4,.4), ZLRGB(.4,.4,.4));
	}
} SceneGame;
