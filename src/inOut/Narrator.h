#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <locale>
#include "../player/Player.h"

class Narrator
{
public:
	Narrator();

	/**************For the console*************/
	void present();
	void distribRolesFinish();
	void enterPlayer(std::list<Player> &players);
	uint16_t selectTypeOfRolesDistrib();
	void defineRolesNb(const size_t & nbPlayers, std::vector<uint16_t>& nbPlayersPerRoles, std::vector<Role>& roles);
	void showNbPlayersPerRoles(const std::vector<uint16_t>& nbPlayersPerRoles, std::vector<Role>& roles);
	void showNbPlayers(const size_t &nbPlayers);
};
