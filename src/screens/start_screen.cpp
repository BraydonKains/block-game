#include "headers/start_screen.h"

StartScreen::StartScreen(SDL_Renderer* _renderer) {
	renderer = _renderer;
}

StartScreen::~StartScreen() {
	free(field);
}

void StartScreen::eventHandler() {
}

void StartScreen::init() {
	field = new Field(200, 400);
}

void StartScreen::run() {
	init();

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

	SDL_Texture* field_texture = SDL_CreateTextureFromSurface(renderer, field->getSurface());
	
	SDL_RenderCopy(renderer, field_texture, NULL, NULL);

	SDL_RenderPresent(renderer);
}
