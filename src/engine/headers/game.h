#ifndef Game_h
#define Game_h

#include<SDL2/SDL.h>
#include "../../enums.h"

#define SCREEN_W 1280
#define SCREEN_H 720

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
