#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include "../game/hud.h"
#include "../game/man.h"



class Game {


public:
	explicit Game(int argc, char** argv);

	void run();

	void update();

	bool is_runnig() const;

	~Game();


private:
	Man man = Man();

	std::vector<char> word = {};
	
	std::vector<char> hits = {};

	std::vector<char> errors = {};

};



#endif
