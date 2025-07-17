# Hangman Game

What happens when a programmer is bored?\
In this case, a hangman game that runs in the terminal! 😉👍

### Disclaimer!

This project was created solely to practice my limited C++ skills.\
The idea here isn't to create something incredible. Just to puzzle over some parameter-by-reference passing, pointers, arrays, strings, understand a bit about Code Styles... And, with that, experience sharp swings between love and hate for our beloved OOP. Hehehe!

Finally, if you're a C++ beginner like me, feel free to download and explore this repository.\
I'll also accept tips, corrections, complaints, CASH... (just kidding!)

Project structure
---------------
    ├─ HangmanGame/        Project folder
    │  └─ src/             Application source code
    │     ├─ core/         Base files dedicated to "rendering" and game flow
    │     ├─ game/         Game scene objects
    │     ├─ utils/        Useful terminal input/output stream and file reading functions
    └     └─ main.cpp      Application entry point



## Code Styles Guidelines

Code formatting is based on the [WebKit](https://webkit.org/code-style-guidelines/) standard.\
But there are some caveats (which I haven't figured out yet by inserting them into .clang-format 😐)



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
void Sprite::load_bitmap(const std::string &filename)
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



## Clone

```
git clone https://github.com/SousaFelipe/HangmanGame.git
```
