#ifndef HANGMAN_UTILS_CONSOLE_H_
#define HANGMAN_UTILS_CONSOLE_H_

#include <iostream>



namespace console {


constexpr size_t WIDTH = 40;


char await_user_input();


void print_line();


void add_padding(const size_t& word_size);


} // namespace console



#endif // HANGMAN_UTILS_CONSOLE_H_
