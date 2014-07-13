#include "TextureGenerator.h"

using namespace RussianChickenInspector::Graphics;

TextureGenerator* TextureGenerator::instance = NULL;

TextureGenerator::TextureGenerator(){}

TextureGenerator* TextureGenerator::GetInstance()
{
	return (instance == NULL) ? instance = new TextureGenerator() : instance;
}

Texture2D* TextureGenerator::GenerateTexture(Color* color, int width, int height)
{
	/*
		width ? width : Levels::Tile.TILE_SIZE;
		height ? height: Levels::Tile.TILE_SIZE;
	 */
	 Color textureData[width * height];
	 return new Texture2D(GenerateTexData(textureData, color, width, height), width, height);
}

Color* TextureGenerator::GenerateTexData(Color* texData, Color* color, int width, int height)
{
	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			if (y % 4 == 0 || x % 4 == 0)
			{
				texData[y * width + x] = Color(0,0,0);
			} else
			{
				texData[y * width + x] = Color(127,0,255);
			}
		}
	}
	return texData;
}

Color* TextureGenerator::AddCircle(Color* texData, int texWidth, int texHeight, int radius, Vector2 position, Color circleColor)
{
	for (int x = 0; x < texWidth; x++)
            {
                for (int y = 0; y < texHeight; y++)
                {
                    if (y - (int)position.Y <= sqrt(radius * radius - (x - (int)position.X) * (x - (int)position.X)) && y - (int)position.Y >= -sqrt(radius * radius - (x - (int)position.X) * (x - (int)position.X)))
                    {
                        texData[y * texWidth + x] = circleColor;
                    }
                }
            }
            return texData;
}

Color* TextureGenerator::AddTriangle(Color* texData, int texWidth, int texHeight, Vector2 vertex1, Vector2 vertex2, Vector2 vertex3, Color triColor)
{
	for (int x = 0; x < texWidth; x++)
            {
                for (int y = 0; y < texHeight; y++)
                {
                    if (CheckIfPointInTriangle(vertex1, vertex2, vertex3, Vector2(x, y)))
                    {
                        texData[y * texWidth + x] = triColor;
                    }
                }
            }
            return texData;
}

Color* TextureGenerator::AddRectangle(Color* texData, int texWidth, int texHeight, Rectangle rect, Color rectColor)
{
	for (int x = 0; x < texWidth; x++)
            {
                for (int y = 0; y < texWidth; y++)
                {
                    if (x > rect.Left() && x < rect.Right() && y > rect.Top() && y < rect.Bottom())
                    {
                        texData[y * texWidth + x] = rectColor;
                    }
                }
            }
            return texData;
}

bool TextureGenerator::CheckIfPointInTriangle(Vector2 vertex1, Vector2 vertex2, Vector2 vertex3, Vector2 point)
{
	    Vector2 v0 = vertex3 - vertex1;
            Vector2 v1 = vertex2 - vertex1;
            Vector2 v2 = point - vertex1;

            double dot00 = vertex1.LengthSquared();
            double dot01 = vertex1.Dot(vertex2);
            double dot02 = vertex1.Dot(vertex3);
            double dot11 = vertex2.LengthSquared();
            double dot12 = vertex2.Dot(vertex3);

            double invDenom, u, v;
            invDenom = 1.0 / (dot00 * dot11 - dot01 * dot01);

            u = (dot11 * dot02 - dot01 * dot12) * invDenom;
            v = (dot00 * dot12 - dot01 * dot02) * invDenom;

            return (u >= 0) && (v >= 0) && (u + v < 1);
}

Vector2 TextureGenerator::Midpoint(Vector2 p1, Vector2 p2)
{
	return Vector2((p1.X + p2.X) / 2.0f, (p1.Y + p2.Y) / 2.0f);
}
