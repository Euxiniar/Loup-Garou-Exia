#include "Day.h"

Day::Day(Narrator& nar)
	: Time(nar)
{
}

void Day::launchTime(std::vector<Player>& players, std::vector<std::vector<Player*>>& rolesArray)
{
	m_nar.wakeUp(players.at(0).getName());
	players.erase(players.begin());
}
