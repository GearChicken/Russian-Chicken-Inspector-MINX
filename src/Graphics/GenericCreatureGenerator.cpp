#include "GenericCreatureGenerator.h"
#include "MathHelper.h"

using namespace RussianChickenInspector::Graphics;

TextureGenerator* GenericCreatureGenerator::GetInstance()
{
	return (instance == NULL) ? instance = new GenericCreatureGenerator() : instance;
}

Color* GenericCreatureGenerator::GenerateTexData(Color* texData, Color* color, int width, int height)
{
                        Color baseColor = Color(255,255,255);
                        for (int y = 0; y < height; y++)
                        {
                            for (int x = 0; x < width; x++)
                            {

                                texData[y * width + x] = Color(0,0,0,0);
                            }
                        }
                        texData = AddCircle(texData, width, height, width/2, Vector2(width/2, height/2), baseColor);
                        texData = AddRectangle(texData, width, height, Rectangle(width/2-2, 1, 3, height/3), Color(0,0,0));
                        return texData;
}
