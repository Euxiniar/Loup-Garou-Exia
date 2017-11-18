#include "Player.h"

Player::Player(std::string name) 
	: m_name(name), state(ALIVE)
{
}

void Player::setRole(std::shared_ptr<Role> role)
{
	m_role = role;
}

void Player::setName(std::string name)
{
	m_name = name;
}

std::string Player::getName()
{
	return m_name;
}
