

#include "Events.hpp"

#include <iostream>

using namespace std;
using namespace com::toxiclabs::galaxy;

EventKeyDown::EventKeyDown():Event()
{
	type=EventType::KeyDown;
	key=KeyType::None;
}

EventKeyDown::EventKeyDown(KeyType key):Event()
{
	type=EventType::KeyDown;
	this->key=key;
}

EventKeyUp::EventKeyUp():Event()
{
	type=EventType::KeyUp;
	key=KeyType::None;
}

EventKeyUp::EventKeyUp(KeyType key):Event()
{
	type=EventType::KeyUp;
	this->key=key;
}
