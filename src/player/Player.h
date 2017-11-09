#pragma once
#include <string>

#include "../rolesDistribution/Role.h"

#define ALIVE 1
#define DEAD 0

class Player
{
public:
	Player(std::string name);
	Player();
	void setRole(Role roleName);
private:
	bool state; //state 1 == alive and 
	std::string m_name;
	Role m_role;
};