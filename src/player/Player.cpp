#include "Player.h"

Player::Player(std::string name) 
	: m_name(name), state(ALIVE)
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

std::string Player::getName()
{
	return m_name;
}
