#include "headers/field.h"

Field::Field(int _width, int _height) {
	width = _width;
	height = _height;
	field_surface = SDL_LoadBMP("assets/white.bmp");
}

Field::~Field() {
	SDL_FreeSurface(field_surface);
}

RenderData Field::getRenderData() {
	SDL_Rect src;
	src.x = 0;
	src.y = 0;
	src.w = 200;
	src.h = 400;

	RenderData render_data;
	render_data.surface = field_surface;
	render_data.src_rect = &src;
	return render_data;
}
