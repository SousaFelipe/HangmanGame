# Hangman Game

What happens when a programmer is bored?\
In this case, a hangman game that runs in the terminal! 😉👍

### Disclaimer!

This project was created solely to practice my limited C++ skills.\
The idea here isn't to create something incredible. Just to puzzle over some parameter-by-reference passing, pointers, arrays, strings, understand a bit about Code Styles... And, with that, experience sharp swings between love and hate for our beloved OOP. Hehehe!

Finally, if you're a C++ beginner like me, feel free to download and explore this repository.\
You won't find much, it's a very simple and small project, but it's a good exercise for beginners.\

Project structure
---------------
    HangmanGame/        Project folder
    ├─ main.cpp         Application entry point
    ├─ res/             Game .bmp assets
    └─ src/             Application source code
       ├─ core/         Base files dedicated to "rendering" and game flow
       ├─ game/         Game scene objects
       └─ utils/        Useful terminal input/output stream and file reading functions



## Undestending .bmp assets
The .bmp files in the `res` folder are not actually bitmaps. They are just text files containing characters in decimal format, from the extended [ASCII](https://www.matematica.pt/util/resumos/tabela-ascii.php) table. Below you can check all the characters that were used in the game, to "draw" the character in the terminal.

|  Decimal  | Character |
|   :---:   |   :---:   |
|    176    |     ░     |
|    186    |     ║     |
|    187    |     ╗     |
|    188    |     ╝     |
|    200    |     ╚     |
|    201    |     ╔     |
|    202    |     ╩     |
|    205    |     ═     |
|    219    |     █     |




## Code Styles Guidelines

I didn't use any files to standardize code formatting and style, but the code follows some directives based on [WebKit Code Styles](https://webkit.org/code-style-guidelines/)\
Basic Code Style Rules:
- Use 4 spaces for indentation (no tabs).
- Use spaces around operators and after commas.
- Use spaces after keywords like `if`, `for`, `while`, etc.
- Do not identify the body of a namespace.
- Vertical spacing rules (line breaks) will be further explained below...

> 3 lines of vertical spacing between the last `#include` and the first function, global variable, class definition, etc...

Example:
```cpp
...
#include "../utils/console.h"



Game::Game(const char* word)
{
    ...
}
```

> 3 lines of vertical spacing between each function\
> Except when inside a `namespace`. In this case, use only 2 lines of vertical spacing

Example:
```cpp
void Sprite::load_bitmap(const std::string& filename)
{
    ...
}



void Sprite::draw() const
{
    ...
}
```

Example with namespace:
```cpp

namespace any_namespace {


void function_within_namespace()
{
    ....
}


int another_function_within_the_namespace()
{
    ....
}


}
```



## Usage

```psh
cd C:\go\to\the\.exe\file\folder
```
```psh
.\HangmanGame.exe mysteriousword
```



## License

[MIT](https://github.com/SousaFelipe/HangmanGame/blob/master/LICENSE.txt)
