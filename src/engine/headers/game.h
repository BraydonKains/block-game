#ifndef Game_h
#define Game_h

#include<SDL2/SDL.h>
#include "../../enums.h"

class Game {
public:
	State game_state;
	SDL_Window* window;
	SDL_Renderer* renderer;

	Game();

	void init();
	void play();
	void clean();
};

#endif
