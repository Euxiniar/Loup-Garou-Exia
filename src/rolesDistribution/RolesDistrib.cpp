#include "RolesDistrib.h"

RolesDistrib::RolesDistrib(Narrator &nar)
{
	m_nar = std::make_unique<Narrator>(nar);
}

void RolesDistrib::distribChoice()
{
	m_nar->enterPlayer(m_players);
}
