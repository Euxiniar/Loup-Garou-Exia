#pragma once
#include "../inOut/Narrator.h"
#include "../player/Player.h"

#include <memory>
#include <random>
#include <list>
#include <vector>

#define WEREWOLF_PERCENT 0.35

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

	void autoDefineRolesNb(const size_t &nbPlayers, std::vector<uint16_t> &nbPlayersPerRoles);
	void defineRoles(const std::vector<uint16_t> &nbPlayersPerRoles);
};