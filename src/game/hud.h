#ifndef HANGMAN_GAME_HUD_H
#define HANGMAN_GAME_HUD_H

#include <cmath>
#include <iostream>
#include <vector>
#include "../utils/console.h"



class HUD {


public:
    static void draw(std::vector<char>& word, std::vector<char>& hits, std::vector<char>& errors);

    ~HUD() = default;


private:
    HUD();
};



#endif // HANGMAN_GAME_HUD_H
