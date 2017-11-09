#pragma once
#include "../inOut/Narrator.h"
#include "../player/Player.h"
#include "AutoCompositionPercent.h"

#include <memory>
#include <random>
#include <list>
#include <vector>


class Distribution
{
public:
	Distribution(Narrator &nar, std::list<Player> &players, std::vector<std::list<Player>> &rolesArray);
	void distribPlayers();
	void distribRoles();

private:
	std::unique_ptr<Narrator> m_nar;
	std::unique_ptr<std::list<Player>*> m_players;
	std::unique_ptr<std::vector<std::list<Player>>*> m_rolesArray;
	std::vector<Role> m_roles;

	void autoDefineRolesNb(const size_t &nbPlayers, std::vector<uint16_t> &nbPlayersPerRoles);
	void defineRoles(const std::vector<uint16_t> &nbPlayersPerRoles);
};