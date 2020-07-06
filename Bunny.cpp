#include "Bunny.h"

Bunny::Bunny(int textureIndex, ZL_Rect &bounds)
{
	nSpriteIndex = textureIndex;
	dGravity = 0.75f;
	dx = 0.0f;
	dy = ZLHEIGHT;
	dSpeedX = ZL_Rand::Range(0.0f, 10.0f);
	dSpeedY = ZL_Rand::Range(0.0f, 10.0f) - 5.0f;
	rectBounds = bounds;
}

void Bunny::Update()
{
	dx += dSpeedX;
	dy -= dSpeedY;
	dSpeedY += dGravity;

	if (dx > rectBounds.right)
	{
		dSpeedX *= -1.f;
		dx = (float)rectBounds.right;
	}
	else if (dx < rectBounds.left)
	{
		dSpeedX *= -1.f;
		dx = (float)rectBounds.left;
	}

	if (dy < rectBounds.bottom)
	{
		dSpeedY *= -0.85f;
		dy = (float)rectBounds.bottom;
		if (ZL_Rand::Range(0.0f, 1.0f) > 0.5f)
		{
			dSpeedY -= ZL_Rand::Range(0.0f, 6.0f);
		}
	}
	else if (dy > rectBounds.top)
	{
		dSpeedY = 0;
		dy = (float)rectBounds.top;
	}
}