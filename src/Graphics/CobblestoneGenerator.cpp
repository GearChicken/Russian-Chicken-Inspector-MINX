#include "CobblestoneGenerator.h"
#include "MathHelper.h"

using namespace RussianChickenInspector::Graphics;

TextureGenerator* CobblestoneGenerator::GetInstance()
{
	return (instance == NULL) ? instance = new CobblestoneGenerator() : instance;
}

Color* CobblestoneGenerator::GenerateTexData(Color* texData, Color* color, int width, int height)
{
                        Color baseColor = Color(47, 79, 79);
                        for (int y = 0; y < height; y++)
                        {
                            for (int x = 0; x < width; x++)
                            {

                                texData[y * width + x] = Color(47, 79, 79);
                            }

                        }
                        for (int i = 0; i < 25; i++)
                        {
                            int a = (rand() % 41) - 10;
                            texData = AddCircle(
                                texData,
                                width, height,
                                (rand() % 3) + 2,
                                Vector2(rand() % 33, rand() % 33),
                                AddColor(baseColor, Color(a, a, a, 0))
                                );
                        }
                        return texData;
}
