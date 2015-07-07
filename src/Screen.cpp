
#include "Screen.hpp"
#include "Sprite.hpp"

#include <iostream>
#include <string>

using namespace std;
using namespace com::toxiclabs::galaxy;

Screen::Screen(string  name)
{
	this->name=name;
}

void Screen::Add(Sprite * sprite)
{
	sprites.push_back(sprite);
}

Sprite * Screen::Find(string & name)
{
	for(Sprite * s : sprites)
	{
		if(s->name==name)
		{
			return s;
		}
	}
	
	return nullptr;
}

void Screen::KillAll()
{
	for(Sprite * s : sprites)
	{
		s->Kill();
	}
}

void Screen::Step(int ms,std::vector<SDL_Event> & events)
{
	for(Sprite * s : sprites)
	{
		s->Step(ms,events);
	}
}
