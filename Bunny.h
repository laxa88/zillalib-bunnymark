#include "include.h"

#ifndef __BUNNY__
#define __BUNNY__

struct Bunny {
	Bunny();
	~Bunny();

	int nSpriteIndex;
	float gravity;
	float x;
	float y;
	float speedX;
	float speedY;
	ZL_Rectf bounds;

	void Update();
	void Draw();
};

#endif