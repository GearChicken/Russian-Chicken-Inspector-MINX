#include "Egg.h"

using namespace RussianChickenInspector::Creatures;

Egg::Egg(Game* game, Vector2 position) : Sprite(EggGenerator::GetInstance()->GenerateTexture(NULL,32,32), position), GameComponent(game)
{
	SetScale(Vector2(0.25f, 0.5f));
}

Rectangle Egg::GetCollisionBox()
{
	return Rectangle(int(position.X) - texture->GetWidth()/4, int(position.Y) - texture->GetHeight()/2, texture->GetWidth()/2, texture->GetHeight()/2);
}

void Egg::Update(GameTime* gameTime)
{
	timePassed += gameTime->GetDeltaTimeMillis();
	if(timePassed > EGG_SPAWN_CHICKEN_TIME)
	{
		removeEgg = true;
		
	}
}

bool Egg::ShouldRemoveEgg()
{
	return removeEgg;
}

int Egg::EggsGiven()
{
	return 1;
}

bool Egg::CanPickUpEgg()
{
	return canPickUp;
}
