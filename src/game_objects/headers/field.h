#ifndef Field_h
#define Field_h

#define FIELD_X 6
#define FIELD_Y 12

#include <SDL2/SDL.h>

class Field {
public:
	int width;
	int height;

	Field(int _width, int _height);
	~Field();

	SDL_Surface* getSurface();
private:
	SDL_Surface* field_surface;
};

#endif
