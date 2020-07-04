#include "BunnyMark.h"
#include "Bunny.h"

ZL_Surface BunnyMark::srfBunnyTiles;
std::vector<Bunny> BunnyMark::vecBunnies;
ZL_Rect BunnyMark::rectBounds;
bool BunnyMark::bAdding;
int BunnyMark::nCount;
int BunnyMark::nMaxCount;
int BunnyMark::nAmount;

void BunnyMark::Init() {
	rectBounds.left = 0.0;
	rectBounds.top = ZLHEIGHT;
	rectBounds.right = ZLWIDTH;
	rectBounds.bottom = 0.0;
	bAdding = false;
	nCount = 0;
	nMaxCount = 200000;
	nAmount = 100;

	srfBunnyTiles = ZL_Surface("Data/lineup.png");
	srfBunnyTiles.SetTextureFilterMode(false, false);
	srfBunnyTiles.SetTilesetClipping(12, 0);
	nCount = 0;

	// if (startBunnyCount > 0)
	{
		AddBunnies(100);
	}
}

void BunnyMark::Update()
{
    if (bAdding)
    {
        if (nCount < nMaxCount)
        {
            AddBunnies(nAmount);
        }
    }

    for (auto &bunny : vecBunnies)
    {
        bunny.Update();
    }
}

void BunnyMark::Draw()
{
	for (auto &bunny : vecBunnies)
    {
        srfBunnyTiles.SetTilesetIndex(bunny.nSpriteIndex);
		srfBunnyTiles.Draw(bunny.dx, bunny.dy);
    }
}

void BunnyMark::AddBunnies(int count)
{
	for (int i = 0; i < count; i++)
    {
		Bunny bunny{ZL_Rand::Int(12), rectBounds };
		bunny.dx = (nCount % 2) * 800.0;
		vecBunnies.push_back(bunny);
		nCount++;
    }
}

void BunnyMark::StartAdding()
{
	bAdding = true;
}

void BunnyMark::StopAdding()
{
	bAdding = false;
}

void BunnyMark::Reset()
{
	// TODO delete each bunny before clearing?

	vecBunnies.clear();
	nCount = 0;
}