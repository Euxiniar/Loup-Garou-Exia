#include "RolesDistrib.h"

RolesDistrib::RolesDistrib(Narrator &nar)
{
	m_nar = std::make_unique<Narrator>(nar);
}

void RolesDistrib::distribChoice()
{
	m_nbPlayers = m_nar->askNbPlayers();
}
