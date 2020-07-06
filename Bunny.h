#include "include.h"

#ifndef __BUNNY__
#define __BUNNY__

struct Bunny
{
	int nSpriteIndex;
	float dGravity;
	float dx;
	float dy;
	float dSpeedX;
	float dSpeedY;
	ZL_Rect rectBounds;

	Bunny(int textureIndex, ZL_Rect &bounds);

	void Update();
};

#endif