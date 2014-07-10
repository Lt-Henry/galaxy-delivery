

#include "Events.hpp"

#include <iostream>

using namespace std;
using namespace com::toxiclabs::galaxy;

EventKey::EventKey(KeyType key)
{
	type=EventType::Key;
	this->key=key;
}