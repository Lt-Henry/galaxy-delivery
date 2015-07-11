
#ifndef _GAME_
#define _GAME_


#include "Sprite.hpp"
#include "Screen.hpp"

#include <SDL2/SDL.h>

#include <string>
#include <map>
#include <vector>

#define GAME_RSRC	"../rsrc/"

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
				
				std::vector<Screen *> screens;
				Screen * screen;
				
				/*!
				 private constructor
				*/
				Game();
				
				/*!
				 private destructor
				*/
				~Game();
				
				public:
				
				/*!
				 texture map
				*/
				std::map<std::string,SDL_Texture *>textures;
				
				/*!
				 Static Game Getter and Factory
				*/
				static Game * GetGame();
				
				/*!
				 destroy game
				*/
				static void Free();
				
				
				/*!
				 Starts main loop. This is a blocking
				 function
				*/
				void Run();
				
				/*!
				 Loads a texture package. A package is a folder 
				 inside rsrc path
				*/
				void LoadTextures(std::string pkg);
				
				/*!
				 Unloads a texture package
				*/
				void UnloadTextures(std::string pkg);
				
				
				/*!
				 Update display. No need to call it.
				*/
				void Render();
				
				/*!
				 Sets current screen. This method calls OnHide
				 for outgoing Screen and OnShow for incoming one
				*/
				void GoToScreen(std::string name);
				
				
			};
		}
	}
	
}


#endif
