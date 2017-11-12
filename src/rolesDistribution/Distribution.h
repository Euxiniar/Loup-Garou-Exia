#pragma once
#include "../inOut/Narrator.h"
#include "../player/Player.h"

#include <memory>
#include <random>
#include <list>
#include <vector>


class Distribution
{
public:
	Distribution(Narrator &nar);
	void distribPlayers(std::list<Player> &players);
	void distribRoles(std::list<Player> &players, std::vector<std::list<Player*>> &rolesArray);

private:
	Narrator& m_nar;
	std::vector<std::shared_ptr<Role>> m_roles;

	void autoDefineRolesNb(const size_t &nbPlayers, 
		std::vector<uint16_t> &nbPlayersPerRoles);

	void defineRoles(std::list<Player> &players, 
		std::vector<std::list<Player*>> &rolesArray, 
		const std::vector<uint16_t> &nbPlayersPerRoles);
};
