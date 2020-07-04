#include "BunnyMark.h"
#include "Bunny.h"

void BunnyMark::Init() {
	srfBunnyTiles = ZL_Surface("Data/lineup.png");
	srfBunnyTiles.SetTextureFilterMode(false, false);
	srfBunnyTiles.SetTilesetClipping(35, 36);
}

void BunnyMark::Update()
{
	nBunnies += 1;
}

void BunnyMark::Draw()
{}

void BunnyMark::AddBunnies(int count)
{}

void BunnyMark::StartAdding()
{}

void BunnyMark::StopAdding()
{}

void BunnyMark::Reset()
{}