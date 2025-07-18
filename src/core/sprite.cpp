#include "sprite.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include "../utils/files.h"



void Sprite::load_bitmap(const std::string& filename)
{
    std::ifstream file(files::get_path_from_file(filename));

    if (!file.is_open()) {
        std::cerr << "Erro na leitura do bitmap!" << '\n';
        system("pause");
        exit(-1);
    }

    std::string line;

    while (std::getline(file, line)) {

        std::istringstream stream(line);
        std::string token;

        while (std::getline(stream, token, ' ')) {
            try {
                this->bitmap.push_back(std::stoi(token));
            } catch (const std::invalid_argument&) {
                this->bitmap.push_back(63);
            }
        }

        this->bitmap.push_back(10);
    }

    file.close();
}



void Sprite::draw() const
{
    for (const int bit : this->bitmap) {
        if (bit == 10) {
            std::cout << '\n';
        } else {
            std::cout << static_cast<char>(bit);
        }
    }

    std::cout.flush();
}
