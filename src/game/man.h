#ifndef HANGMAN_GAME_MAN_H_
#define HANGMAN_GAME_MAN_H_

#include <ranges>
#include <vector>
#include "member.h"



class Man {


public:
    Man();

    void draw();

    void disable_next_member();

    bool is_alive() const;

    ~Man() = default;


private:
    std::vector<Member> members = {};
};



#endif // HANGMAN_GAME_MAN_H_
