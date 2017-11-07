#pragma once
#include "../inOut/Narrator.h"
#include "../player/Player.h"
#include "RolesDefinition.h"

#include <memory>
#include <random>
#include <list>
#include <vector>

class RolesDistrib
{
public:
	RolesDistrib(Narrator &nar);
	void distribChoice();
	void distribRoles();

private:
	std::unique_ptr<Narrator> m_nar;
	std::list<Player> m_players;
	std::vector<std::vector<Player>> m_roles;
	std::vector<uint16_t> autoDefineRolesNb(const size_t &nbPlayers);
	void defineRoles(const std::vector<uint16_t> &nbPlayersPerRoles);
};