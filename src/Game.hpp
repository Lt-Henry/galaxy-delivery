
#ifndef _GAME_
#define _GAME_

#include "Events.hpp"
#include "Sprite.hpp"

#include <SDL2/SDL.h>

#include <string>
#include <map>
#include <vector>

namespace com
{
	namespace toxiclabs
	{
		namespace galaxy
		{
			class Game
			{
				private:
					static Game * factory;
					
					SDL_Window * window;
					SDL_Renderer *renderer;
					
					std::vector<Sprite *> sprites;
				
					Game();
					~Game();
							
				public:
				
					std::map<std::string,SDL_Texture *>textures;
					
				
					static Game * GetGame();
					static void Free();
				
				
					void Run();
					
					void LoadTextures(std::string path);
					void UnloadTextures();
					
					void AddSprite(Sprite * sprite);
					
					void StepSprites(int ms,std::vector<Event> & events);
					void RenderSprites();
				
				
			};
		}
	}
	
}


#endif
