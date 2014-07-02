#include "ChickenGenerator.h"
#include "MathHelper.h"

using namespace RussianChickenInspector::Graphics;

TextureGenerator* ChickenGenerator::GetInstance()
{
	return (instance == NULL) ? instance = new ChickenGenerator() : instance;
}

Color* ChickenGenerator::GenerateTexData(Color* texData, Color* color, int width, int height)
{
                        Color baseColor = Color(47, 79, 79);
                        for (int y = 0; y < height; y++)
                        {
                            for (int x = 0; x < width; x++)
                            {

                                texData[y * width + x] = Color(0,0,0,0);
                            }
                        }
                        int a = (rand() % 61) - 10;
                        texData = AddCircle(texData, width, height, 12, Vector2(16, 14), SubtractColor(Color(255,255,255), Color(a, a, a, 0)));
                        texData = AddTriangle(texData, width, height, Vector2(10, 10), Vector2(24, 10), Vector2(16, 0), SubtractColor(Color(255,127,0), Color(a, a, a, 0)));
                        texData = AddCircle(texData, width, height, 2, Vector2(10, 14), Color(0,0,0));
                        texData = AddCircle(texData, width, height, 2, Vector2(22, 14), Color(0,0,0));
                        return texData;
}
