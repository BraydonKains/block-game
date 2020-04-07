#ifndef Render_Data
#define Render_Data

#include <SDL2/SDL.h>

typedef struct RenderData {
	SDL_Surface* surface;
	SDL_Rect* src_rect;
} RenderData;

#endif
