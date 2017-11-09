#include "Distribution.h"

Distribution::Distribution(Narrator &nar)
{
	m_nar = std::make_unique<Narrator>(nar);
	m_roles.emplace_back("Loup-Garou", WEREWOLF_PERCENT);
	m_roles.emplace_back("Villageois");
	m_roles.emplace_back("Sorciere");
	/***As to change if there's more roles***/

}

void Distribution::distribPlayers()
{
	m_nar->enterPlayer(m_players);
}

void Distribution::distribRoles()
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

void Distribution::autoDefineRolesNb(const size_t & nbPlayers, std::vector<uint16_t> &nbPlayersPerRoles)
{
	
	nbPlayersPerRoles.push_back((uint16_t)(nbPlayers*m_roles.at(0).getCompositionPorcent()));
	nbPlayersPerRoles.push_back((uint16_t)nbPlayers-(uint16_t)(nbPlayers*m_roles.at(0).getCompositionPorcent()));
	m_nar->showNbPlayersPerRoles(nbPlayersPerRoles, m_roles);
}

void Distribution::defineRoles(const std::vector<uint16_t> &nbPlayersPerRoles)
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



