#ifndef HANGMAN_GAME_MEMBER_H_
#define HANGMAN_GAME_MEMBER_H_

#include <string>
#include "../core/sprite.h"



class Member {


public:
    explicit Member(const std::string& enabled_bmp, const std::string& disabled_bmp);

    void draw() const;

    void disable();

    bool is_enabled() const;

    ~Member() = default;


private:
    bool enabled = true;

    Sprite sprite_enabled = Sprite();

    Sprite sprite_disabled = Sprite();
};



#endif // HANGMAN_GAME_MEMBER_H_
