#include "engine/headers/game.h"

int main() {
	Game* game = new Game();
	game->init();
	game->play();
	game->clean();
	return 0;
}
