#include "hud.h"



void HUD::draw(std::vector<char>& word,
			   std::vector<char>& hits,
			   std::vector<char>& errors)
{
	console::print_line();
	std::cout << std::endl;
	console::add_padding(word.size());

	for (size_t i = 0; i < word.size(); i++) {
		std::cout << hits[i] << ' ';
	}

	std::cout << '\n' << "\033[31m";
	console::add_padding(word.size());
	std::copy(errors.begin(), errors.end(), std::ostream_iterator<char>(std::cout, " "));
	std::cout << "\033[0m" << '\n';

	console::print_line();
}
