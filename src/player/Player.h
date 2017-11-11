#pragma once
#include <string>
#include <memory>
#include "../rolesDistribution/Werewolf.h"
#include "../rolesDistribution/Villager.h"

#define ALIVE 1
#define DEAD 0

class Player
{
public:
	Player(std::string name);
	void setRole(Role &roleName);
private:
	bool state; //state 1 == alive and 
	std::string m_name;
	Role m_role;
};
