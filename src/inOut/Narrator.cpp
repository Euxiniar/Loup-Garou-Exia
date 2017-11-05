#include "Narrator.h"

Narrator::Narrator()
{

}

void Narrator::present()
{
	std::cout << "-------LOUP-GAROU-------" << std::endl;
	std::cout << "Bienvenue sur le jeu du Loup-Garou" << std::endl;
}

int Narrator::askNbPlayers()
{
	int nbPlayers;
	std::cout << "Combiens de joueurs etes vous ?" << std::endl;
	std::cin >> nbPlayers;
	return nbPlayers;
}
void Narrator::askName()
{
}
