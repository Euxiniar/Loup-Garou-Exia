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
	void distribPlayers(std::vector<Player>& players);
	void distribRoles(std::vector<Player>& players, std::vector<std::vector<Player*>>& rolesArray);

private:
	Narrator& m_nar;
	std::vector<std::unique_ptr<Role>> m_roles;

	void autoDefineRolesNb(const size_t &nbPlayers, 
		std::vector<uint16_t> &nbPlayersPerRoles);

	void defineRoles(std::vector<Player>& players, std::vector<std::vector<Player*>>& rolesArray, const std::vector<uint16_t> &nbPlayersPerRoles);
};
