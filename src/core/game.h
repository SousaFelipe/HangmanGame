#ifndef HANGMAN_CORE_GAME_H_
#define HANGMAN_CORE_GAME_H_

#include <iostream>
#include <vector>
#include "../game/hud.h"
#include "../game/man.h"



class Game {


public:
    explicit Game(const char* word);

    void run();

    void update();

    ~Game();


private:
    Man man = Man();

    std::vector<char> word = {};

    std::vector<char> hits = {};

    std::vector<char> errors = {};

    bool hits_have_underscore() const;
};

#endif // HANGMAN_CORE_GAME_H_
