#include "Player.h"

Player::Player(std::string name) 
	: m_name(name), m_state(ALIVE)
{
}

void Player::changeRole(uint16_t roleId)
{
	switch (roleId)
	{
	case WEREWOLF:
		m_role.reset(new Werewolf());
		break;
	case VILLAGER:
		m_role.reset(new Villager());
		break;
	}
}

void Player::changeState(bool state)
{
	m_state = state;
}

std::unique_ptr<Role>& Player::getRole()
{
	return m_role;
}

std::string Player::getName()
{
	return m_name;
}

bool Player::isAlive()
{
	return (m_state == ALIVE);
}