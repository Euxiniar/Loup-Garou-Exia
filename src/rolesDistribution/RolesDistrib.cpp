#include "RolesDistrib.h"

RolesDistrib::RolesDistrib(Narrator &nar)
{
	m_nar = std::make_unique<Narrator>(nar);
	m_roles.emplace_back("Loup-Garou");
	m_roles.emplace_back("Villageois");

	/***As to change if there's more roles***/

}

void RolesDistrib::distribPlayers()
{
	m_nar->enterPlayer(m_players);
}

void RolesDistrib::distribRoles()
{
	uint16_t choice = m_nar->selectTypeOfRolesDistrib();
	std::vector<uint16_t> nbPlayersPerRoles;
	switch (choice)
	{
	case 1:
		autoDefineRolesNb(m_players.size(), nbPlayersPerRoles);
		break;
	case 2:
		m_nar->defineRolesNb(m_players.size(), nbPlayersPerRoles, m_roles);
		break;
	default:
		break;
	}
	defineRoles(nbPlayersPerRoles);
}

void RolesDistrib::autoDefineRolesNb(const size_t & nbPlayers, std::vector<uint16_t> &nbPlayersPerRoles)
{
	
	nbPlayersPerRoles.push_back((uint16_t)(nbPlayers*WEREWOLF_PERCENT));
	nbPlayersPerRoles.push_back((uint16_t)nbPlayers-(uint16_t)(nbPlayers*WEREWOLF_PERCENT));
	m_nar->showNbPlayersPerRoles(nbPlayersPerRoles, m_roles);
}

void RolesDistrib::defineRoles(const std::vector<uint16_t> &nbPlayersPerRoles)
{
	std::vector<Player> shuffledPlayers(m_players.begin(), m_players.end());
	std::random_shuffle(shuffledPlayers.begin(), shuffledPlayers.end());

	std::vector<Player> selectedRole;
	for (int y = 0; y < nbPlayersPerRoles.size(); y++)
	{
		for (int x = 0; x < nbPlayersPerRoles.at(y); x++)
		{
			shuffledPlayers.back().setRole(m_roles.at(y));
			selectedRole.push_back(shuffledPlayers.back());
			shuffledPlayers.pop_back();
		}
		m_rolesArrays.push_back(selectedRole);
		selectedRole.clear();
	}
}



