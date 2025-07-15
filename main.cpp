#pragma once

#include "src/core/game.h"



int main(int argc, char** argv)
{
	Game game = Game(argc, argv);
	game.update();
	game.run();

	return 0;
}
