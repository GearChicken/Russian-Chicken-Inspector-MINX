#include "EggFallWindow.h"

using namespace RussianChickenInspector::Graphics;

EggFallWindow::EggFallWindow(Game * game) : GameComponent(game)
{
	for(int e = 0; e < 10; e++)
	{
		eggs.push_back(pair<Vector2,Color>(Vector2(rand() % 800,rand()%600),((rand() % 101) < 85) ? Color(255,255,255) : Color(255,255,0)));
	}
	eggTex = EggGenerator::GetInstance()->GenerateTexture(NULL,32,32);
}

void EggFallWindow::Update(GameTime * gameTime)
{
	for(auto egg : eggs)
	{
		egg.first += Vector2(0,3);
		if(egg.first.Y > 700)
		{
			egg.first = Vector2(rand() % 800, -100);
		}
	}
}

void EggFallWindow::Draw(TextureBatch * texBatch)
{
	for(auto egg : eggs)
	{
		texBatch->Draw(eggTex, egg.first.X, egg.first.Y, 1.f, 1.f, 0.f, egg.second);
	}
}
