
#include "Actors.hpp"
#include "Game.hpp"


#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <glob.h>
#include <libgen.h>

#include <iostream>
#include <string>

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
	UnloadTextures();
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
	
	window = SDL_CreateWindow("Galaxy Delivery", 100, 100, 1280, 720, SDL_WINDOW_SHOWN);
	
	if(window==nullptr)
	{
		cerr<<"Failed to create window"<<endl;
		return;
	}
	
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	
	if(renderer==nullptr)
	{
		cerr<<"Failed to create renderer"<<endl;
		return;
	}
	
	/* Load textures once the renderer is ready */
	LoadTextures("../rsrc");
	
	
	/* faking actors */
	
	AddSprite(new Ship());
	
	
	bool quit_request=false;
	SDL_Event event;
	
	vector<SDL_Event> events;
	
	while(!quit_request)
	{
		
		events.clear();
		
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{
				case SDL_QUIT:
					cout<<"Quit request"<<endl;
					quit_request=true;
				break;
			}
			
			events.push_back(event);
		}
		
		StepSprites(0,events);
		
		
		SDL_RenderClear(renderer);
		RenderSprites();
		SDL_RenderPresent(renderer);
	}
	
	SDL_Quit();
}


void Game::LoadTextures(string path)
{
	
	path=path+"/*.png";
	
	cout<<"Loading Textures..."<<endl;
	
	glob_t glob_result;
	glob(path.c_str(),GLOB_TILDE,NULL,&glob_result);
		
	for(unsigned int i=0;i<glob_result.gl_pathc;i++)
	{
		string file = glob_result.gl_pathv[i];
		string name = basename(glob_result.gl_pathv[i]);
		cout<<"--loading "<<name<<endl;
		
		SDL_Surface * surface = nullptr;
		
		surface = IMG_Load(file.c_str());
		
		if(surface==nullptr)
		{
			cerr<<"Unable to load "<<file<<endl;
		}
		else
		{
			SDL_Texture * texture = nullptr;
			
			texture = SDL_CreateTextureFromSurface(renderer,surface);
			SDL_FreeSurface(surface);
			
			if(texture==nullptr)
			{
				cerr<<"Unable to create texture for "<<file<<endl;
				
			}
			else
			{
				/* all went ok */
				textures[name]=texture;
			}
		}
		
		
	}
	
	globfree(&glob_result);
}

void Game::UnloadTextures()
{
	cout<<"* Freeing textures..."<<endl;
	for(pair<string,SDL_Texture *> it : textures)
	{
		cout<<"-"<<it.first<<endl;
		SDL_DestroyTexture(it.second);
	}
}

void Game::AddSprite(Sprite * sprite)
{
	sprites.push_back(sprite);
}


void Game::StepSprites(int ms,vector<SDL_Event> & events)
{
	for(Sprite * sprite : sprites)
	{
		sprite->Step(ms,events);
	}
}

void Game::RenderSprites()
{
	vector<Sprite *>screen;
	vector<Sprite *>world;
	
	for(Sprite * sprite : sprites)
	{
		switch(sprite->rendermode)
		{
			case SpriteRenderMode::Screen:
				screen.push_back(sprite);
			break;
			
			case SpriteRenderMode::World:
				world.push_back(sprite);
			break;
		}
	}
	
	for(Sprite * sprite : world)
	{
		
		SDL_RenderCopy(renderer,sprite->texture,NULL,&sprite->rectangle);
				
	}
	
	for(Sprite * sprite : screen)
	{
		/* render code goes here */
	} 
}
