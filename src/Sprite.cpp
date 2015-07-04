
#include "Sprite.hpp"

#include <iostream>
#include <string>

using namespace std;
using namespace com::toxiclabs::galaxy;


Sprite::Sprite(string name)
{
	this->name=name;
	
	texture=nullptr;
	state=SpriteState::Running;
	
}




void Sprite::Kill()
{
	state=SpriteState::Kill;
}
