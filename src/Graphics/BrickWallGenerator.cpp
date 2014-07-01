#include "BrickWallGenerator.h"
#include "MathHelper.h"

using namespace RussianChickenInspector_MINX::Graphics;

Color* BrickWallGenerator::GenerateTexData(Color* texData, Color* color, int width, int height)
{
	Color baseColor = Color(139,69,19);
        Color subtractiveColor;
                        double randVal;
                        for (int y = 0; y < height; y++)
                        {
                            for (int x = 0; x < width; x++)
                            {
                                randVal = (rand() % 1000)/1000.f;

                                int safeXMax = (int)Math::clamp(x + 1, 0, width - 1);
                                int safeYMax = (int)Math::clamp(y + 1, 0, height - 1);
                                int safeXMin = (int)Math::clamp(x - 1, 0, width - 1);
                                int safeYMin = (int)Math::clamp(y - 1, 0, height - 1);

                                if (DarkerThan(texData[y * width + safeXMax], baseColor)
                                    || DarkerThan(texData[y * width + safeXMin], baseColor)
                                    || DarkerThan(texData[safeYMax * width + x], baseColor)
                                    || DarkerThan(texData
                            [safeYMin * width + x], baseColor))
                                {
                                    randVal = Math::clamp((float)randVal - 0.05f, 0.0f, 1.0f);
                                }

                                if (randVal > 0.7)
                                {
                                    subtractiveColor = Color(45, 45, 45, 0);
                                }
                                else
                                {
                                    subtractiveColor = Color(85, 85, 85, 0);
                                }
                                texData[y * width + x] = SubtractColor(baseColor, subtractiveColor);
                            }
                        }
                        return texData;
}
