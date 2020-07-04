#include "Bunny.h"

Bunny::Bunny(int textureIndex, ZL_Rect &bounds)
{
	nSpriteIndex = 0;
	dGravity = 0.75;
	dx = 0.0;
	dy = ZLHEIGHT;
	dSpeedX = ZL_Rand::Range(0.0, 10.0);
	dSpeedY = ZL_Rand::Range(0.0, 10.0) - 5.0;
	rectBounds = bounds;
}

void Bunny::Update()
{
	dx += dSpeedX;
	dy -= dSpeedY;
	dSpeedY += dGravity;

	if (dx > rectBounds.right)
	{
		dSpeedX *= -1;
		dx = rectBounds.right;
	}
	else if (dx < rectBounds.left)
	{
		dSpeedX *= -1;
		dx = rectBounds.left;
	}

	if (dy < rectBounds.bottom)
	{
		dSpeedY *= -0.85;
		dy = rectBounds.bottom;
		if (ZL_Rand::Range(0.0, 1.0) > 0.5)
		{
			dSpeedY -= ZL_Rand::Range(0.0, 6.0);
		}
	}
	else if (dy > rectBounds.top)
	{
		dSpeedY = 0;
		dy = rectBounds.top;
	}
}