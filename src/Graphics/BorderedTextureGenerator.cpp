#include "BorderedTextureGenerator.h"

using namespace RussianChickenInspector::Graphics;

TextureGenerator* BorderedTextureGenerator::GetInstance()
{
	return (instance == NULL) ? instance = new BorderedTextureGenerator() : instance;
}

Color* BorderedTextureGenerator::GenerateTexData(Color* texData, Color* color, int width, int height)
{
	Color fillColor = color != NULL ? *color : Color(255,255,255);
	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			if (x == 0 || x == width - 1 || y == 0 || y == height - 1)
			{
				texData[y * width + x] = Color(0,0,0);
			} else
			{
				texData[y * width + x] = fillColor;
			}
		}
	}
	return texData;
}
