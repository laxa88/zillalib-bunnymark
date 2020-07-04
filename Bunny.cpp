#include "Bunny.h"

Bunny::Bunny(int textureIndex, ZL_Rectf &bounds)
{
	nSpriteIndex = 0;
	dGravity = 0.75;
	dx = 0.0;
	dy = 0.0;
	dSpeedX = ZL_Rand::Range(0.0, 10.0);
	dSpeedY = ZL_Rand::Range(0.0, 10.0) - 5.0;
	rectfBounds = bounds;
}

void Bunny::Update()
{
	dx += dSpeedX;
	dy += dSpeedY;
	dSpeedY += dGravity;

	if (dx > rectfBounds.right)
	{
		dSpeedX *= -1;
		dx = rectfBounds.right;
	}
	else if (dx < rectfBounds.left)
	{
		dSpeedX *= -1;
		dx = rectfBounds.left;
	}

	if (dy > rectfBounds.low)
	{
		dSpeedY *= -0.85;
		dy = rectfBounds.low;
		if (ZL_Rand::Range(0.0, 1.0) > 0.5)
		{
			dSpeedY -= ZL_Rand::Range(0.0, 6.0);
		}
	}
	else if (dy < rectfBounds.high)
	{
		dSpeedY = 0;
		dy = rectfBounds.high;
	}
}