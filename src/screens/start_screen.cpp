#include "headers/start_screen.h"

StartScreen::StartScreen(SDL_Renderer* _renderer) {
	renderer = _renderer;
}

void StartScreen::eventHandler() {
}

void StartScreen::run() {
	bool close_flag = false;

	while(!close_flag) {
		SDL_Event event;
		SDL_PollEvent(&event);
		if(event.type == SDL_QUIT) {
			close_flag = true;
		}
		render();
	}
}

void StartScreen::render() {
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}
