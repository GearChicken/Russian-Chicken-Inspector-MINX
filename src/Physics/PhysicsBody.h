#include "../Graphics/Sprite.h"
#include <MINX/GameComponent.h>
#include <MINX/MathHelper.h>

using namespace RussianChickenInspector_MINX::Graphics;

namespace RussianChickenInspector_MINX
{
	namespace Physics
	{
		class PhysicsBody : public Sprite, public GameComponent
		{
			public:
				const float DRAG = 0.9f;
				const float ZERO_VELOCITY_THRESHOLD = 0.03f;
				
				inline PhysicsBody(Game * game, Texture2D * texture, Vector2 position) : Sprite(texture, position), GameComponent(game){}
				
				virtual void Update(GameTime * gameTime);
				
				inline void ApplyVelocity(Vector2 velocity){this->velocity += velocity;}
				
				inline Vector2 GetVelocity(){return velocity;}
				inline void SetVelocity(Vector2 velocity){this->velocity = velocity;}
			private:
				Vector2 velocity;
		};
	}
}
