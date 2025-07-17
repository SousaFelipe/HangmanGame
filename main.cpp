#include "src/core/game.h"



int main(int argc, char **argv)
{
    if (argc < 2) {
        std::cerr << '\n' << "Voce deve iniciar o programa com o comando: .\\HangmanGame.exe";
        std::cerr << "\033[32m" << " palavra" << "\033[0m" << "\n\n";
        system("pause");
        return -1;
    }

    const char* word = argv[1];

    if (const size_t len = strlen(word) / sizeof(char); len < 4 || len > 16) {
        std::cerr << '\n' << "A palavra misteriosa deve conter de 4 a 16 caracteres...";
        std::cerr << '\n' << "A que voce inseriu contem " << len << "!\n\n";
        system("pause");
        return -1;
    }

    Game game = Game(word);
    game.update();
    game.run();

    return 0;
}
