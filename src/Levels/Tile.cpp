#include "Tile.h"

using namespace RussianChickenInspector::Levels;

Tile::Tile(TextureGenerator* texGen, Vector2 position, bool solid) : Sprite(texGen->GenerateTexture(new Color(255,255,255), TILE_SIZE, TILE_SIZE),position)
{
	this->solid = solid;
	this->texGen = texGen;
}

Rectangle Tile::TileRectangle()
{
	return Rectangle(position.X, position.Y, TILE_SIZE, TILE_SIZE);
}

bool Tile::IsSolid()
{
	return solid;
}

void Tile::SetSolid(bool solid)
{
	this->solid = solid;
}

TextureGenerator* Tile::TexType()
{
	return texGen;
}
