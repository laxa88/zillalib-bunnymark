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
	ZL_Rectf rectfBounds;

	Bunny(int textureIndex, ZL_Rectf &bounds);

	void Update();
	void Draw();
};

#endif