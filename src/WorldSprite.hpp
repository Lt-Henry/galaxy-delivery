
#ifndef _WORLD_SPRITE_
#define _WORLD_SPRITE_

#include "Sprite.hpp"
#include "Screen.hpp"

#include <string>

namespace com
{
	namespace toxiclabs
	{
		namespace galaxy
		{
			class WorldSprite: public Sprite
			{
			
				protected:
				
				Screen * screen;
				
				public:
				
				WorldSprite(std::string name,Screen * screen);
				virtual ~WorldSprite(){};
			};
		}
	}
}

#endif
