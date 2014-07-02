#include "WoodPlankGenerator.h"
#include "MathHelper.h"

using namespace RussianChickenInspector::Graphics;

TextureGenerator* WoodPlankGenerator::GetInstance()
{
	return (instance == NULL) ? instance = new WoodPlankGenerator() : instance;
}

Color* WoodPlankGenerator::GenerateTexData(Color* texData, Color* color, int width, int height)
{
                        Color baseColor = Color(139,69,19);
                        Color subtractiveColor;
                        double randVal;

                        for (int x = 0; x < width; x++)
                        {
                            for (int y = 0; y < height; y++)
                            {
                                randVal = (rand() % 1000)/1000.f;

                                if (randVal > 0.99 || x % 4 == 0 || x % 4 == 1)
                                {
                                    subtractiveColor = Color((rand() % 46) + 20, (rand() % 46) + 20, 19, 0);
                                }
                                else
                                {
                                    subtractiveColor = Color(85, 69, 19, 0);
                                }
                                texData[y * width + x] = AddColor(baseColor, subtractiveColor);
                            }
                        }
                   	return texData;
}
