

#include "Events.hpp"

#include <iostream>

using namespace std;
using namespace com::toxiclabs::galaxy;

EventKeyDown::EventKeyDown()
{
	type=EventType::KeyDown;
	key=KeyType::None;
}

EventKeyDown::EventKeyDown(KeyType key)
{
	type=EventType::KeyDown;
	this->key=key;
}

EventKeyUp::EventKeyUp()
{
	type=EventType::KeyUp;
	key=KeyType::None;
}

EventKeyUp::EventKeyUp(KeyType key)
{
	type=EventType::KeyUp;
	this->key=key;
}
