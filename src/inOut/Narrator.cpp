#include "Narrator.h"

Narrator::Narrator()
{

}

void Narrator::present()
{
	std::cout << "-------LOUP-GAROU-------" << std::endl;
	std::cout << "Bienvenue sur le jeu du Loup-Garou" << std::endl;
}

void Narrator::enterPlayer(std::list<Player>& players)
{
	std::string name;
	std::locale locale;
	
	while ((name.length() != 1 || std::toupper(name[0], locale) != 'V') &&
		(name.length() != 1 || std::toupper(name[0], locale) != 'Q'))
	{
		std::cin >> name;
		players.emplace_back(name);
	}
}
