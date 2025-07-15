#include "member.h"



Member::Member(const std::string& valid_bmp, const std::string& invalid_bmp)
{
	this->sprite_enabled = Sprite(valid_bmp);
	this->sprite_disabled = Sprite(invalid_bmp);
}



void Member::draw() const
{
	if (enabled)
	{
		sprite_enabled.draw();
	}
	else
	{
		sprite_disabled.draw();
	}
}



void Member::disable()
{
	enabled = false;
}



bool Member::is_enabled() const
{
	return enabled;
}
