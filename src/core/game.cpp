#include "game.h"

#include <algorithm>
#include "../utils/console.h"



Game::Game(int argc, char** argv)
{
	if (argc < 2) {
		std::cerr << '\n' << "Voce deve iniciar o programa com o comando: .\\HangmanGame.exe";
		std::cerr << "\033[32m" << " palavra" << "\033[0m" << "\n\n";
		system("pause");
		exit(-1);
	}

	const char* arg = argv[1];

	if (const size_t len = strlen(arg) / sizeof(char); len < 4 || len > 16) {
		std::cerr << '\n' << "A palavra misteriosa deve conter de 4 a 16 caracteres...";
		std::cerr << '\n' << "A que voce inseriu contem " << len << "!\n\n";
		system("pause");
		exit(-1);
	}

	this->word = std::vector<char>(arg, arg + std::strlen(arg));
	this->hits = std::vector<char>(this->word.size(), '_');
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
	const __int64 dash_count =
		std::count_if(this->hits.begin(), this->hits.end(), [](const char& hit) {
		return hit == '_';
	});

	return dash_count > 0;
}



Game::~Game()
{
	if (this->errors.size() < 3) {
		std::cout << "\033[32m" << "PARABENS, VOCE ACERTOU A PALAVRA!";
	}
	else {
		std::cout << "\033[31m" << "VOCE PERDEU! A PALAVRA ERA: ";
		std::copy(this->word.begin(), this->word.end(), std::ostream_iterator<char>(std::cout, ""));
	}

	std::cout << "\033[0m" << std::endl;
	system("pause");
}
