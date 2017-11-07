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
