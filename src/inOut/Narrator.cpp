#include "Narrator.h"

Narrator::Narrator()
{

}

void Narrator::present()
{
	std::cout << "-------------LOUP-GAROU-----------" << std::endl;
	std::cout << "Bienvenue sur le jeu du Loup-Garou" << std::endl << std::endl;
}

void Narrator::distribRolesFinish()
{
	std::cout << "Les roles ont ete distribue !" << std::endl;
	std::cout << "La partie peut commencer !" << std::endl << std::endl;
}

void Narrator::showNbPlayers(const size_t &nbPlayers)
{
	std::cout << std::endl << "(Vous etes actuellement " << nbPlayers << " Joueurs.)" << std::endl;
}

void Narrator::sayRolesTurn(std::vector<std::vector<Player*>>& rolesArray)
{
	std::map<int, Player*> participatingPlayers;
	std::map<int, Player*> potentialsDyingPlayers;

	int participatingPlayersId{ 0 };
	int potentialsDyingPlayersId{ 0 };
	int participatingPlayersSelected{ 0 };
	int potentialsDyingPlayersSelected{ 0 };

	for (size_t i = 0; i < rolesArray.size(); i++)
	{
		if (!rolesArray.at(i).empty())
		{
			if (rolesArray.at(i).at(0)->getRole()->getActivityPeriod() == NIGHT_ACTIVITY)
			{
				std::cout << "Le(s) " << rolesArray.at(i).at(0)->getRole()->getName() << "(s) se reveillent !" << std::endl;
				for (size_t y = 0; y < rolesArray.at(i).size(); y++)
				{
					if (rolesArray.at(i).at(y)->isAlive())
					{
						participatingPlayers.emplace(participatingPlayersId, rolesArray.at(i).at(y));
						participatingPlayersId++;
					}
				}
				std::cout << "Pour voter pour quelqu'un, tapez votre numero, suivi de celui de votre cible :" << std::endl;
				for (int y = 0; y < participatingPlayers.size(); y++)
				{
					std::cout << participatingPlayers.at(y)->getName() << " ( " << y << " )" << std::endl;
				}
				std::cout << std::endl;
				for (size_t z = 0; z < rolesArray.size(); z++)
				{
					if (!rolesArray.at(z).empty())
					{
						if (rolesArray.at(z).at(0)->getRole()->getId() != rolesArray.at(i).at(0)->getRole()->getId())
						{
							for (size_t a = 0; a < rolesArray.at(z).size(); a++)
							{
								if (rolesArray.at(z).at(a)->isAlive())
								{
									potentialsDyingPlayers.emplace(potentialsDyingPlayersId, rolesArray.at(z).at(a));
									potentialsDyingPlayersId++;
								}
							}
						}
					}
				}
				for (int y = 0; y < potentialsDyingPlayers.size(); y++)
				{
					std::cout << potentialsDyingPlayers.at(y)->getName() << " ( " << y << " )" << std::endl;
				}
				std::cin >> participatingPlayersSelected;
				std::cin >> potentialsDyingPlayersSelected;
				if (participatingPlayers.at(participatingPlayersSelected)->getVoteAgainst() != -1)
				{
					potentialsDyingPlayers.at(participatingPlayers.at(participatingPlayersSelected)->getVoteAgainst())->remVote();
				}
				participatingPlayers.at(participatingPlayersSelected)->changeVoteAgainst(potentialsDyingPlayersSelected);
				potentialsDyingPlayers.at(potentialsDyingPlayersSelected)->addVote();
			}
		}
	}
}

void Narrator::enterPlayer(std::vector<Player>& players)
{
	std::string name;
	std::locale locale;
	std::cout << "Entrez vos noms les uns apres les autres" << std::endl;
	std::cout << "Tapez 'V' pour valider, ou 'Q' pour quitter" << std::endl;

	while ((name.length() != 1 || std::toupper(name[0], locale) != 'V') &&
		(name.length() != 1 || std::toupper(name[0], locale) != 'Q'))
	{
		showNbPlayers(players.size());
		std::cin >> name;
		if ((name.length() != 1 || std::toupper(name[0], locale) != 'V') &&
			(name.length() != 1 || std::toupper(name[0], locale) != 'Q'))
		{
			players.emplace_back(name);
		}
	}
	if ((name.length() == 1 && std::toupper(name[0], locale) == 'Q'))
	{
		exit(EXIT_SUCCESS);
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

void Narrator::defineRolesNb(const size_t & nbPlayers, std::vector<uint16_t>& nbPlayersPerRoles, std::vector<std::unique_ptr<Role>>& roles)
{
	uint16_t choice{ 0 };
	uint16_t nbPlayersRoles{ 0 };
	bool everyPlayerCouldHaveRole = false;

	while (!everyPlayerCouldHaveRole)
	{
		for (size_t i = 0; i < roles.size(); i++)
		{
			std::cout << "Il reste " << nbPlayers - nbPlayersRoles << " Joueurs" << std::endl;
			if (nbPlayersRoles != nbPlayers)
			{
				std::cout << "Choisissez le nombre de " << roles.at(i)->getName() << std::endl;
				std::cin >> choice;
			}
			if (nbPlayersRoles + choice > nbPlayers)
			{
				std::cout << "Vous avez depasse la taille maximale de joueurs !" << std::endl;
				i--;
			}
			else if (choice == nbPlayers)
			{
				std::cout << "Il ne peut pas y avoir autant de joueur dans la meme equipe !" << std::endl;
				i--;
			}
			else
			{
				nbPlayersRoles += choice;
				nbPlayersPerRoles.push_back(choice);
			}
			choice = 0;
		}
		if (nbPlayersRoles != nbPlayers)
		{
			std::cout << "Vous n'avez pas defini assez de roles pour tout le monde !" << std::endl;
			nbPlayersRoles = 0;
			nbPlayersPerRoles.clear();
		}
		else
		{
			everyPlayerCouldHaveRole = !everyPlayerCouldHaveRole;
		}
	}
	showNbPlayersPerRoles(nbPlayersPerRoles, roles);
}

void Narrator::showNbPlayersPerRoles(const std::vector<uint16_t>& nbPlayersPerRoles, std::vector<std::unique_ptr<Role>>& roles)
{
	for (size_t i = 0; i < nbPlayersPerRoles.size(); i++)
	{
		std::cout << roles.at(i)->getName() << " ( " << nbPlayersPerRoles.at(i) << " )" << std::endl;
	}
}
