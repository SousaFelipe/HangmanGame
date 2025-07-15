#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include "../core/sprite.h"



class Member
{


public :
	explicit Member(const std::string& valid_bmp,const std::string& invalid_bmp);
	
	void draw() const;
	
	void disable();
	
	bool is_enabled() const;

	~Member() = default;


private:
	bool enabled = true;

	Sprite sprite_enabled;

	Sprite sprite_disabled;

};



#endif
