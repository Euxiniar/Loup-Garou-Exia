#pragma once
#include "../inOut/Narrator.h"
#include <list>

class Time
{
public:
	Time(std::list<Player> &players);
	virtual void launchTime();

protected:
	std::list<Player> &m_players;
	
};