#include "headers/field.h"

Field::Field(int _width, int _height) {
	width = _width;
	height = _height;
	field_surface = SDL_LoadBMP("assets/white.bmp");
}

Field::~Field() {
}

RenderData Field::getRenderData() {
	RenderData x;
	return x;
}
