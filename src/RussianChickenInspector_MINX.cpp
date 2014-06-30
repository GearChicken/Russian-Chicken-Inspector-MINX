
#include "RussianChickenInspector_MINX.h"

using namespace RussianChickenInspector;

RussianChickenInspector_MINX::RussianChickenInspector_MINX()
{
	//This is the constructor. Put stuff here that should happen when the Game is created.

	isRunning = true;
	Game::SetVideoOptions(640, 480, false, "RussianChickenInspector_MINX");
}

void RussianChickenInspector_MINX::Initialize()
{
	//Put stuff here that should happen when the Game is initialized.

	Game::Initialize();
}

void RussianChickenInspector_MINX::LoadContent()
{
	//Put stuff here that loads content for your game.
	Game::LoadContent();
}

void RussianChickenInspector_MINX::UnloadContent()
{
	//Put stuff here that unloads content from your game.
	Game::UnloadContent();
}

void RussianChickenInspector_MINX::Update(GameTime * gameTime)
{
	//Put stuff here to update the logic in your game each tick.
	Game::Update(gameTime);
}

void RussianChickenInspector_MINX::Draw(GameTime * gameTime)
{	
	SetRenderTarget(NULL, MINX::Graphics::Color(100,149,237,255));
	
    //Put stuff here to draw your game each frame.
	Game::Draw(gameTime);
}
