#include "BunnyMark.h"
#include "Bunny.h"

ZL_Surface BunnyMark::srfBunnyTiles;
std::vector<Bunny> BunnyMark::vecBunnies;
ZL_Rectf BunnyMark::rectfBounds;
bool BunnyMark::bAdding;
int BunnyMark::nCount;
int BunnyMark::nMaxCount;
int BunnyMark::nAmount;

void BunnyMark::Init() {
	rectfBounds.left = 0.0;
	rectfBounds.high = 0.0;
	rectfBounds.right = ZLWIDTH;
	rectfBounds.low = ZLHEIGHT;

	srfBunnyTiles = ZL_Surface("Data/lineup.png");
	srfBunnyTiles.SetTextureFilterMode(false, false);
	srfBunnyTiles.SetTilesetClipping(35, 36);
	nCount = 0;

	// if (startBunnyCount > 0)
	{
		AddBunnies(10000);
	}
}

void BunnyMark::Update()
{
	nCount += 1;
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