#include "Player.h"

Player::Player(std::string name) 
	: m_name(name), m_state(ALIVE), m_vote(0), m_voteAgainst(0)
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

void Player::changeVote(int vote)
{
	m_vote = vote;
}

void Player::addVote()
{
	m_vote++;
}

void Player::remVote()
{
	m_vote--;
}

void Player::changeVoteAgainst(int voteAgainst)
{
	m_voteAgainst = voteAgainst;
}

std::unique_ptr<Role>& Player::getRole()
{
	return m_role;
}

std::string Player::getName()
{
	return m_name;
}

int Player::getVote()
{
	return m_vote;
}

int Player::getVoteAgainst()
{
	return m_voteAgainst;
}

bool Player::isAlive()
{
	return (m_state == ALIVE);
}