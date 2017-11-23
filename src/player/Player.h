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
	void changeRole(uint16_t roleId);
	void changeState(bool state);
	std::unique_ptr<Role>& getRole();
	std::string getName();
	bool isAlive();

private:
	bool m_state; //state 1 == alive and 
	std::string m_name;
	std::unique_ptr<Role> m_role;
};
