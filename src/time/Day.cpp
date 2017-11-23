#include "Day.h"

Day::Day(Narrator& nar)
	: Time(nar)
{
}

void Day::launchTime(std::vector<Player>& players, std::vector<std::vector<Player*>>& rolesArray)
{
	m_nar.sayRolesTurn(rolesArray);
	int i = 0;
	while (!players.at(i).isAlive())
	{
		i++;
	}
	players.at(i).changeState(DEAD);
}
