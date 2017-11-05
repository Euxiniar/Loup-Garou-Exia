#pragma once
#include <string>
#define ALIVE 1
#define DEAD 0
class Player
{
public:
	Player(std::string name);
private:
	bool state; //state 1 == alive and 
	std::string m_name;
};