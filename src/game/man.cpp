#include "man.h"

#include <algorithm>



Man::Man()
{
	this->members = {
		Member("head.bmp", "head-black.bmp"),
		Member("body.bmp", "body-black.bmp"),
		Member("legs.bmp", "legs-black.bmp")
	};
}



void Man::draw()
{
	for (auto& member : members) {
		member.draw();
	}
}



void Man::disable_next_member()
{
	for (auto& member : std::ranges::reverse_view(this->members)) {
		if (member.is_enabled()) {
			member.disable();
			break;
		}
	}
}



bool Man::is_alive() const
{
	const __int64 valid_count =
		std::count_if(members.begin(), members.end(), [](const Member& member) {
		return member.is_enabled();
	});

	return valid_count > 0;
}
