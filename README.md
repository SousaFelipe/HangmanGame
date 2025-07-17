# Hangman Game

O que acontece quando um programador fica ocioso?\
Neste caso, um jogo da forca que roda no terminal! 😉👍

### Disclaimer!

Este projeto foi criado apenas para exercitar minhas poucas habilidades com C++.\
A ideia aqui não é criar algo incrível. Apenas "quebrar cabeça" com algumas passagens de parâmetro por referência, ponteiros, vetores, strings, entender um pouco sobre os `Code Styles`... E no meio disso tudo, experimentar agudas oscilações entre amor e ódio ao nosso querido POO. Hehehe!

Em fim, se você for um iniciante em C++, assim como eu, fique a vontade para baixar e fuçar este repositório\
Também aceitarei dicas, correções, reclamações, PIIIIIIIIX... (brincadeira!)

Estrutura do projeto
---------------
    ├─ HangmanGame/        Pasta do projeto
    │  └─ src/             Código fonte da aplicação
    │     ├─ core/         Arquivos base dedicados à "renderização" e fluxo do jogo
    │     ├─ game/         "Objetos" da "cena" do jogo
    │     ├─ utils/        Funções úteis de fluxo de saída/entrada do terminal e leitura de arquivos
    └     └─ main.cpp      Ponto de entrada do jogo



## Code Styles Guidelines

A formatação do código está baseada no padrão [WebKit](https://webkit.org/code-style-guidelines/)\
Mas existem algumas ressalvas (que eu ainda não descobri com inseri-las no .clang-format 😐)\



> 3 linhas de espaçamento vertical entre o último `#include` e a primeira função, variável global, definição de classe, etc...

Exemplo:
```cpp
...
#include "../utils/console.h"



Game::Game(const char* word)
{
    ...
}
```



> 3 linhas de espaçamento vertical entre cada função\
> Exceto quando estiver dentro de um `namespace`. Neste caso, utilize apenas 2 linhas de espaçamento vertical

Exemplo:
```cpp
void Sprite::load_bitmap(const std::string &filename)
{
    ...
}



void Sprite::draw() const
{
    ...
}
```



Exemplo com namespace:
```cpp

namespace namespace_qualquer {


void funcao_dentro_do_namespace()
{
    ....
}


int outra_funcao_dentro_do_namespace()
{
    ....
}

}
```



## Clone

```
git clone https://github.com/SousaFelipe/HangmanGame.git
```
