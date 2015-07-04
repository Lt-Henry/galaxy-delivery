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
				
				std::string name; /*! screen name */
				std::vector<Sprite *> sprites; /*! world sprites */
				
				Screen(std::string name);
				virtual ~Screen(){};
				
				void Add(Sprite * sprite);
				
				Sprite * Find(std::string & name);
				
				void KillAll();
				
				
				virtual void Step(int ms,std::vector<SDL_Event> & events);
				
				virtual void OnShow(){};
				virtual void OnHide(){};
			};
		}
	}
}

#endif
