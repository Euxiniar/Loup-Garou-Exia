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
	void changeVote(int vote);
	void addVote();
	void remVote();
	void changeVoteAgainst(int voteAgainst);
	std::unique_ptr<Role>& getRole();
	std::string getName();
	int getVote();
	int getVoteAgainst();
	bool isAlive();

private:
	bool m_state; //state 1 == alive and 
	std::string m_name;
	std::unique_ptr<Role> m_role;
	int m_vote;
	int m_voteAgainst;
};
