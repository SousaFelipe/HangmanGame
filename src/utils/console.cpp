#include "console.h"



namespace console {


	char await_user_input()
	{
		int attempt_count = 0x00;
		char attempt_char = '\0';

	user_input:
		std::cout << '\n' << "INSIRA SEU PALPITE (OU 0 PARA SAIR): ";
		std::cin >> attempt_char;

		if (std::isalpha(attempt_char)) {
			return attempt_char;
		}

		if (attempt_char == '0') {
			std::cout << "Voce desistiu do jogo!!!" << '\n';
			system("pause");
			exit(0);
		}

		if (attempt_count >= 3) {
			std::cerr << "Voce digitou um caracter invalido muitas vezes. Reinicie o jogo!!!" << '\n';
			system("pause");
			exit(-1);
		}

		attempt_count += 1;
		goto user_input;
	}
	
	
	void print_line()
	{
		for (unsigned int i = 0; i < console::WIDTH; i++) {
			std::cout << static_cast<char>(205);
		}
		std::cout << std::endl;
	}


	void add_padding(const size_t& word_size)
	{
		auto width_mid = std::floor(console::WIDTH / 2);
		auto rword_mid = std::floor(((word_size * 2) - 1) / 2);

		for (unsigned int i = 0; i < width_mid - rword_mid; i++) {
			std::cout << ' ';
		}

		std::cout.flush();
	}
}
