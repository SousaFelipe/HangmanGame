#include "member.h"



Member::Member(const std::string& enabled_bmp, 
			   const std::string& disabled_bmp)
{
	this->sprite_enabled.set_bitmap(enabled_bmp);
	this->sprite_disabled.set_bitmap(disabled_bmp);
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
