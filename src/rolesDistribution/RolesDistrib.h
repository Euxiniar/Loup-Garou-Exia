#pragma once
#include "../inOut/Narrator.h"
#include "../player/Player.h"

#include <memory>
#include <list>

class RolesDistrib
{
public:
	RolesDistrib(Narrator &nar);
	void distribChoice();

private:
	int m_nbPlayers;
	std::unique_ptr<Narrator> m_nar;
	std::list<Player> m_players;
};