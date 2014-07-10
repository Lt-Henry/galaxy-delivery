
#ifndef _ACTORS_
#define _ACTORS_

#include "Sprite.hpp"
#include <vector>

namespace com
{
	namespace toxiclabs
	{
		namespace galaxy
		{
			class Ship: public Sprite
			{
				public:
				
				Ship();
				
				void Step(int ms,std::vector<Event*> & events);
				
			};
		}
	}
}

#endif
