#pragma once
#include "../inOut/Narrator.h"
#include <vector>
#include "../player/Player.h"
#include <memory>

class Time
{
public:
	Time(Narrator& nar);
	virtual void launchTime(std::vector<Player>& players, std::vector<std::vector<Player*>>& rolesArray) = 0;

protected:
	Narrator& m_nar;
};