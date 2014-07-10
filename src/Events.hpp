

#ifndef _EVENTS_
#define _EVENTS_

namespace com
{
	namespace toxiclabs
	{
		namespace galaxy
		{
			enum class EventType { None, KeyDown, KeyUp, Click};
			
			enum class KeyType {None, Up, Down, Left, Right};
			
			class Event
			{
				public:
					
				EventType type;
								
			};
			
			class EventKeyDown : public Event
			{
				public:
				
				KeyType key;
				EventKeyDown();	
				EventKeyDown(KeyType key);
			};
			
			class EventKeyUp: public Event
			{
				public:
				
				KeyType key;
				EventKeyUp();
				EventKeyUp(KeyType key);
			};
			
		}
	}
}

#endif
