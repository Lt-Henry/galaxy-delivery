

#ifndef _EVENTS_
#define _EVENTS_

namespace com
{
	namespace toxiclabs
	{
		namespace galaxy
		{
			enum class EventType { None, Key, Click};
			
			enum class KeyType {Up, Down, Left, Right};
			
			class Event
			{
				public:
					
				EventType type;
								
			};
			
			class EventKey : public Event
			{
				public:
				
				KeyType key;
					
				EventKey(KeyType key);
			};
			
		}
	}
}

#endif