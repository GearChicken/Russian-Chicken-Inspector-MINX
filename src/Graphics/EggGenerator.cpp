#include "EggGenerator.h"
#include "MathHelper.h"

using namespace RussianChickenInspector::Graphics;

TextureGenerator* EggGenerator::GetInstance()
{
	return (instance == NULL) ? instance = new EggGenerator() : instance;
}

Color* EggGenerator::GenerateTexData(Color* texData, Color* color, int width, int height)
{
                        Color baseColor = Color(255, 160, 122);
                        for (int y = 0; y < height; y++)
                        {
                            for (int x = 0; x < width; x++)
                            {

                                texData[y * width + x] = Color(0,0,0,0);
                            }
                        }
                        texData = AddCircle(texData, width, height, 16, Vector2(16, 16), Color(205, 92, 92));
                        texData = AddCircle(texData, width, height, 15, Vector2(16, 16), baseColor);
                        texData = AddCircle(texData, width, height, 5, Vector2(12, 12), Color(255, 180, 132));
                        return texData;
}
