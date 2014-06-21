
#ifndef _GAME_
#define _GAME_

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
				
				
			};
		}
	}
	
}


#endif
