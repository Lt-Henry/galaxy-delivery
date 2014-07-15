

#ifndef _SPRITE_
#define _SPRITE_


#include <SDL2/SDL.h>
#include <string>
#include <vector>

namespace com
{
	namespace toxiclabs
	{
		namespace galaxy
		{
			
			enum class SpriteState{Running,KillRequest};
			
			enum class SpriteRenderMode{Screen,World};
			
			class Sprite
			{
				
				public:
					
				std::string name;
				SDL_Texture * texture;
				SpriteState state;
				SpriteRenderMode rendermode;
				SDL_Rect rectangle; 
				
				Sprite(std::string name);
				virtual ~Sprite();
				
				virtual void Step(int ms,std::vector<SDL_Event> & events);
				
				
				
			};
		}
	}
}

#endif
