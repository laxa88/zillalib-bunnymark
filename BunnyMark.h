#include "include.h"

#ifndef __BUNNYMARK__
#define __BUNNYMARK__

struct BunnyMark {
	ZL_Surface srfBunnyTiles;
	int nBunnies;

	void Init();
	void Update();
	void Draw();
};

#endif