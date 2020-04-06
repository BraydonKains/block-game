#include "headers/field.h"

Field::Field(int _width, int _height) {
	width = _width;
	height = _height;
	field_surface = SDL_CreateRGBSurface(0, width, height, 32, 100, 100, 100, 200);
}

Field::~Field() {
}

SDL_Surface* Field::getSurface() {
	return field_surface;
}
