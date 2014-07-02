#include "Sprite.h"

using namespace RussianChickenInspector::Graphics;

Sprite::Sprite(Texture2D* texture, Vector2 position, Color tintColor, Rectangle* sourceRect, float rotation, Vector2 rotationOrigin, Vector2 scale)
{
	this->texture = texture;
	this->position = position;
	this->tintColor = tintColor;
	this->sourceRect = sourceRect;
	this->rotation = rotation;
	this->rotationOrigin = rotationOrigin;
	this->scale = scale;
}

void Sprite::Draw(TextureBatch* texBatch)
{
	texBatch->Draw(texture, position.X, position.Y, scale.X, scale.Y, rotation, tintColor, *sourceRect);
}
