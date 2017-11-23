#include "Day.h"

Day::Day(Narrator& nar)
	: Time(nar)
{
}

void Day::launchTime(std::vector<Player>& players, std::vector<std::vector<Player*>>& rolesArray)
{
	m_nar.sayRolesTurn(rolesArray);
	//players.changeState(DEAD);
}
