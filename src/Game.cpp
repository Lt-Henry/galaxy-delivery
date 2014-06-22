

#include "Game.hpp"
#include <SDL2/SDL.h>

#include <iostream>

using namespace std;
using namespace com::toxiclabs::galaxy;

Game * Game::factory = nullptr;


Game::Game()
{
	cout<<"Game constructor"<<endl;
}


Game::~Game()
{
	cout<<"Game destructor"<<endl;
}

Game * Game::GetGame()
{
	if(Game::factory==nullptr)
		Game::factory = new Game();
		
		return Game::factory;
}

void Game::Free()
{
	if(Game::factory!=nullptr)
	{
		delete Game::factory;
	}
}

void Game::Run()
{
	cout<<"Game main loop"<<endl;
	
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		cerr<<"Failed to initialize SDl"<<endl;
	}
	
	SDL_Window *win = SDL_CreateWindow("Galaxy Delivery", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
	
	if(win==nullptr)
	{
		
	}
	
	SDL_Renderer *renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	
	if(renderer==nullptr)
	{
		
	}
	
	bool quit_request=false;
	SDL_Event event;
	
	while(!quit_request)
	{
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{
				case SDL_QUIT:
					cout<<"Quit request"<<endl;
					quit_request=true;
				break;
			}
		}
		
		
		SDL_RenderClear(renderer);
		/* insert render here :D */
		SDL_RenderPresent(renderer);
	}
	
	SDL_Quit();
}
