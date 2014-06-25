
#ifndef _GAME_
#define _GAME_

#include <string>

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
				
					static Game * GetGame();
					static void Free();
				
				
					void Run();
					
					void LoadTextures(std::string path);
				
				
			};
		}
	}
	
}


#endif
