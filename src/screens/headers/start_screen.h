#ifndef Start_screen_h
#define Start_screen_h

#include <SDL2/SDL.h>
#include "screen.h"

class StartScreen {
public:
	StartScreen(SDL_Renderer* _renderer);

	void run();
	void render();
	void eventHandler();
private:
	SDL_Renderer* renderer;
};

#endif
