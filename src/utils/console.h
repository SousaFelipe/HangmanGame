#ifndef CONSOLE_H
#define CONSOLE_H

#include <iostream>



namespace console {


	constexpr unsigned int WIDTH = 40;


	char await_user_input();

	void print_line();

	void add_padding(const size_t& word_size);
}



#endif
