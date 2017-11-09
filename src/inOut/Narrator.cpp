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

void Narrator::defineRolesNb(const size_t & nbPlayers, std::vector<uint16_t>& nbPlayersPerRoles, std::vector<Role>& roles)
{
	uint16_t choice{ 0 };
	uint16_t nbPlayersRoles{ 0 };
	for (size_t i = 0; i < roles.size(); i++)
	{
		std::cout << "Choisissez le nombre de " << roles.at(i).getName() << std::endl;
		std::cin >> choice;
		nbPlayersRoles += choice;
		if (nbPlayersRoles > nbPlayers)
		{
			std::cout << "Vous avez depasse la taille maximale de joueurs !" << std::endl;
			nbPlayersRoles -= choice;
			i--;
		}
		else
		{
			nbPlayersPerRoles.push_back(choice);
		}
	}
	showNbPlayersPerRoles(nbPlayersPerRoles, roles);
}

void Narrator::showNbPlayersPerRoles(const std::vector<uint16_t>& nbPlayersPerRoles, std::vector<Role>& roles)
{
	for (size_t i = 0; i < nbPlayersPerRoles.size(); i++)
	{
		std::cout << roles.at(i).getName() << " ( " << nbPlayersPerRoles.at(i) << " )" << std::endl;
	}
}