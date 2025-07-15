#ifndef FRAME_H
#define FRAME_H

#include <string>
#include <vector>



class Sprite {


public:
	Sprite() = default;
	
	Sprite(const std::string& bitmap_file);

	virtual void draw() const;

	~Sprite() = default;


protected:
	std::vector<int> bitmap = {};

};



#endif