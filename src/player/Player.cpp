#include "Player.h"

Player::Player(std::string name) 
	: m_name(name), state(ALIVE)
{
}

void Player::setRoleName(std::string roleName)
{
	m_role.setName(roleName);
}
