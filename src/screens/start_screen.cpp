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
	SDL_Texture* field_texture = SDL_CreateTextureFromSurface(renderer, field_render.surface);
	if(field_texture == NULL) {
		SDL_Log("SDL_CreateTexture() failed: %s", SDL_GetError());
		exit(1);
	}
	SDL_Rect* dest_rect;
	dest_rect->x = 1140;
	dest_rect->y = 100;
	dest_rect->w = 200;
	dest_rect->h = 400;

	SDL_RenderCopy(renderer, field_texture, field_render.src_rect, dest_rect);

	SDL_RenderPresent(renderer);
}
