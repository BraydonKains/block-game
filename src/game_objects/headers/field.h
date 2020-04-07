#ifndef Field_h
#define Field_h

#define FIELD_X 6
#define FIELD_Y 12

#include <SDL2/SDL.h>
#include "../../engine/headers/render_data.h"

class Field {
public:
	int width;
	int height;

	Field(int _width, int _height);
	~Field();

	RenderData getRenderData();
private:
	SDL_Surface* field_surface;
};

#endif
