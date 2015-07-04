

#include "Scenes.hpp"

#include <iostream>

using namespace std;
using namespace com::toxiclabs::galaxy;

IntroScreen::IntroScreen()
{
	name="screen.Intro";
}


IntroScreen::~IntroScreen()
{
}


void IntroScreen::Step(int ms,std::vector<SDL_Event> & events)
{
	Screen::Step(ms,events);
}
