
#include "RussianChickenInspector_MINX.h"
#include <MINX/Graphics/TextureBatch.h>
#include <MINX/Graphics/ShaderFactory.h>
#include <MINX/Graphics/Font.h>
#include <MINX/Input/Keyboard.h>
#include <MINX/Input/Mouse.h>
#include "Graphics/VillagerGenerator.h"

using namespace MINX;
using namespace MINX::Graphics;
using namespace MINX::Input;

using namespace RussianChickenInspector;
using namespace RussianChickenInspector::Graphics;

const int PLAYER_SPAWN_X = 100;
const int PLAYER_SPAWN_Y = 100;

const int POPUP_DISPLAY_POSITION_X = 10;
const int POPUP_DISPLAY_POSITION_Y = 10;

TextureBatch * texBatch;

Font * font;

Keyboard * keyboard;
Mouse * mouse;

RussianChickenInspector_MINX::RussianChickenInspector_MINX()
{
	//This is the constructor. Put stuff here that should happen when the Game is created.

	isRunning = true;
	Game::SetVideoOptions(800, 600, false, "RussianChickenInspector_MINX");
}

void RussianChickenInspector_MINX::Initialize()
{
	Game::Initialize();
	texBatch = new TextureBatch(ShaderFactory::GetInstance()->GetShaderAtIndex(0));
	keyboard = new Keyboard(this);
	mouse = new Mouse(this);
	srand(time(NULL));
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
	SetRenderTarget(NULL, MINX::Graphics::Color(51,205,10,255));
	texBatch->Draw(((TextureGenerator*)VillagerGenerator::GetInstance())->GenerateTexture(new Color(255,0,0),128,128),0,0);
	
	texBatch->DrawLoadedTextures();
	
	Game::Draw(gameTime);
}
