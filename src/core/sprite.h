#ifndef HANGMAN_CORE_FRAME_H
#define HANGMAN_CORE_FRAME_H

#include <string>
#include <vector>



class Sprite {


public:
    Sprite() = default;

    void load_bitmap(const std::string& filename);

    void draw() const;

    ~Sprite() = default;


protected:
    std::vector<int> bitmap = {};
};



#endif // HANGMAN_CORE_FRAME_H
