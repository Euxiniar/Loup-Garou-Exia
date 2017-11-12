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
	void setRole(std::shared_ptr<Role> role);
private:
	bool state; //state 1 == alive and 
	std::string m_name;
	std::shared_ptr<Role> m_role;
};
