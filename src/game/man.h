#ifndef MAN_H
#define MAN_H

#include <ranges>
#include <vector>
#include "member.h"



class Man {


public:
	Man() = default;

	void draw();

	void disable_next_member();

	bool is_alive() const;

	~Man() = default;


private:
	std::vector<Member> members = {};

};



#endif
