#include "include.h"

#ifndef __BUNNYMARK__
#define __BUNNYMARK__

struct BunnyMark {
	static ZL_Surface srfBunnyTiles;
	static int nBunnies;

	static void Init();
	static void Update();
	static void Draw();

	static void AddBunnies(int count);
	static void StartAdding();
	static void StopAdding();
	static void Reset();
};

#endif