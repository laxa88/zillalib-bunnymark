#include "include.h"

#ifndef __BUNNY__
#define __BUNNY__

struct Bunny {
	int nSpriteIndex;
	double dGravity;
	double dx;
	double dy;
	double dSpeedX;
	double dSpeedY;
	ZL_Rect rectBounds;

	Bunny(int textureIndex, ZL_Rect &bounds);

	void Update();
};

#endif