#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <MINX/Vector2.h>
#include <MINX/Rectangle.h>

using namespace MINX;

namespace RussianChickenInspector
{
	namespace Graphics
	{
		class Camera
		{
			public:
				static void Focus(Vector2 focalPoint);
				static void Focus(float x, float y);
				static glm::mat4 GetMatrix();
				static void SetScreenSize(Rectangle screen);
				static Rectangle GetViewBounds();
			private:
				static glm::mat4 matrix;
				static Rectangle viewBounds;
		};
	}
}
