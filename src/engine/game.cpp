#include "headers/game.h"
#include "../screens/headers/start_screen.h"

Game::Game() {
	game_state = Start;
}

void Game::init() {
	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		printf("error starting video: %s\n", SDL_GetError());
	}

	window = SDL_CreateWindow(
			"Game", 
			SDL_WINDOWPOS_CENTERED, 
			SDL_WINDOWPOS_CENTERED, 
			1000, 
			1000, 
			0
	);
	renderer = SDL_CreateRenderer(window, -1, 0);
}

void Game::play() {
	StartScreen start_screen(renderer);
	while(game_state != Quit) {
		switch(game_state) {
		case Start:
			start_screen.run();
			game_state = Quit;
			break;
		}
	}
}

void Game::clean() {
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}
