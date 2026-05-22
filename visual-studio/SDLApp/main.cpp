/*
*	This program should show a 960px * 540px white screen for 3 seconds and exit.
* 
*	All you need to do to make this work is copy the SDL3 directory to $(SolutionDir)/Dependencies
*	and add the SDL3 dynamic library to the PATH environment variable. Rest of the environment is set up.
*/
#include "SDL3/SDL.h"

int main()
{
	SDL_Init(SDL_INIT_EVENTS);
	SDL_Window* window = SDL_CreateWindow("SDLApp", 960, 540, 0);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
	SDL_Delay(3000);
	return 0;
}
