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

Bunny::~Bunny()
{}

void Bunny::Update()
{}

void Bunny::Draw()
{}