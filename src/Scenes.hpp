#ifndef _SCENES_
#define _SCENES_

#include "Screen.hpp"

namespace com
{
	namespace toxiclabs
	{
		namespace galaxy
		{
			class MenuScreen : public Screen
			{
				public:
				
				MenuScreen();
				~MenuScreen();
				
				void Step(int ms,std::vector<SDL_Event> & events);
			}; 
		}
	}
}

#endif
