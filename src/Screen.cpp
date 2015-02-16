
#include "Screen.hpp"
#include "Sprite.hpp"

#include <iostream>
#include <string>

using namespace std;
using namespace com::toxiclabs::galaxy;


void Screen::Add(Sprite * sprite)
{
	sprites.push_back(sprite);
}
