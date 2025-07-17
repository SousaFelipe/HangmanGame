#include "game.h"

#include <algorithm>
#include "../utils/console.h"



Game::Game(const char* word)
{
    this->word = std::vector<char>(word, word + std::strlen(word));
    this->hits = std::vector<char>(std::strlen(word), '_');
}



void Game::run()
{
    while (this->is_runnig() && this->man.is_alive()) {

        size_t hit_cout = 0;
        const char attempt = console::await_user_input();

        for (size_t i = 0; i < this->word.size(); i++) {
            if (this->word[i] == attempt) {
                this->hits[i] = attempt;
                hit_cout++;
            }
        }

        if (hit_cout == 0) {
            this->man.disable_next_member();
            this->errors.push_back(attempt);
        }

        this->update();
    }
}



void Game::update()
{
    system("cls");
    this->man.draw();
    HUD::draw(this->word, this->hits, this->errors);
}



bool Game::is_runnig() const
{
    const __int64 dash_count
        = std::count_if(this->hits.begin(), this->hits.end(), [](const char& h) { return h == '_'; });

    return dash_count > 0;
}



Game::~Game()
{
    if (this->errors.size() < 3) {
        std::cout << "\033[32m" << "PARABENS, VOCE ACERTOU A PALAVRA!";
    } else {
        std::cout << "\033[31m" << "VOCE PERDEU! A PALAVRA ERA: ";
        std::copy(this->word.begin(), this->word.end(), std::ostream_iterator<char>(std::cout, ""));
    }

    std::cout << "\033[0m" << std::endl;
    system("pause");
}
