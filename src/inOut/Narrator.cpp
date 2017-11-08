#include "Narrator.h"

Narrator::Narrator()
{

}

void Narrator::present()
{
	std::cout << "-------------LOUP-GAROU-----------" << std::endl;
	std::cout << "Bienvenue sur le jeu du Loup-Garou" << std::endl << std::endl;
}

void Narrator::enterPlayer(std::list<Player>& players)
{
	std::string name;
	std::locale locale;
	std::cout << "Entrez vos noms les uns apres les autres" << std::endl;
	std::cout << "Tapez 'V' pour valider, ou 'Q' pour quitter" << std::endl;

	while ((name.length() != 1 || std::toupper(name[0], locale) != 'V') &&
		(name.length() != 1 || std::toupper(name[0], locale) != 'Q'))
	{
		std::cout << std::endl << "(Vous etes actuellement " << players.size() << " Joueurs.)" << std::endl;
		std::cin >> name;
		if ((name.length() != 1 || std::toupper(name[0], locale) != 'V') &&
			(name.length() != 1 || std::toupper(name[0], locale) != 'Q'))
		{
			players.emplace_back(name);
		}
	}
}

uint16_t Narrator::selectTypeOfRolesDistrib()
{
	uint16_t choice{ 0 };
	std::cout << "Tapez 1 pour selectionner les roles automatiquement" << std::endl
		<< "Tapez 2 pour selectionner les roles manuellement" << std::endl;
	std::cin >> choice;
	return choice;
}

void Narrator::defineRolesNb(const size_t & nbPlayers, std::vector<uint16_t>& nbPlayersPerRoles)
{
	uint16_t werewolf_choice{ 0 };

	std::cout << "Choisissez le nombre de Loups-Garous : " << std::endl;
	std::cin >> werewolf_choice;
	showNbPlayersPerRoles(nbPlayersPerRoles);

	nbPlayersPerRoles.push_back((uint16_t)(werewolf_choice));
	nbPlayersPerRoles.push_back((uint16_t)nbPlayers - werewolf_choice);
	showNbPlayersPerRoles(nbPlayersPerRoles);
}

void Narrator::showNbPlayersPerRoles(const std::vector<uint16_t>& nbPlayersPerRoles)
{
	std::vector<std::string> rolesName;
	rolesName.push_back("Loups-Garous");
	rolesName.push_back("Villageois");
	/***As to change if there's more roles***/

	for (size_t i = 0; i < nbPlayersPerRoles.size(); i++)
	{
		std::cout << rolesName.at(i) << " ( " << nbPlayersPerRoles.at(i) << " )" << std::endl;
	}
}