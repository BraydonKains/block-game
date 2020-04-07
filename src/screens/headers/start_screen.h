#ifndef Start_screen_h
#define Start_screen_h

#include <SDL2/SDL.h>
#include "screen.h"
#include "../../game_objects/headers/field.h"

class StartScreen {
public:
	StartScreen(SDL_Renderer* _renderer);
	~StartScreen();

	void eventHandler();
	void init();
	void run();
	void render();
private:
	SDL_Renderer* renderer;
	SDL_Surface* loading_surface;
	Field* field;	
};

#endif
