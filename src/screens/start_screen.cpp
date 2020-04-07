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

	RenderData field_render = field->getRenderData();
	
	/* SDL_RenderCopy(renderer, field_texture, NULL, NULL); */

	SDL_RenderPresent(renderer);
}
