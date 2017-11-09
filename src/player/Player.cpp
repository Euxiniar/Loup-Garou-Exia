#include "Player.h"

Player::Player(std::string name) 
	: m_name(name), state(ALIVE)
{
}

Player::Player()
{
}

void Player::setRole(Role role)
{
	m_role = role;
}
