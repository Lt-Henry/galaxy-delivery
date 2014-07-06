
#ifndef _GAME_
#define _GAME_

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
				
					Game();
					~Game();
							
				public:
				
					std::map<std::string,SDL_Texture *>textures;
				
					static Game * GetGame();
					static void Free();
				
				
					void Run();
					
					void LoadTextures(std::string path);
				
				
			};
		}
	}
	
}


#endif
