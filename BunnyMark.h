#include "include.h"
#include "Bunny.h"

#ifndef __BUNNYMARK__
#define __BUNNYMARK__

struct BunnyMark {
	static ZL_Surface srfBunnyTiles;

	static std::vector<Bunny> vecBunnies;
	static ZL_Rect rectBounds;
	static bool bAdding;
	static int nCount;
	static int nMaxCount;
	static int nAmount;

	static void Init(int startBunnyCount);
	static void Update();
	static void Draw();

	static void AddBunnies(int count);
	static void StartAdding();
	static void StopAdding();
	static void Reset();
};

#endif