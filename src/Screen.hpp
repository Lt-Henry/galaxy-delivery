#ifndef _SCREEN_
#define _SCREEN_

#include <string>
#include <vector>

#include <SDL2/SDL.h>

#include "Sprite.hpp"

namespace com
{
	namespace toxiclabs
	{
		namespace galaxy
		{
			class Screen
			{
				public:
				
				std::string name;
				std::vector<Sprite *> sprites;
				
				virtual void Step(int ms,std::vector<SDL_Event> & events){};
				
				virtual ~Screen(){};				
						
			};
		}
	}
}

#endif
