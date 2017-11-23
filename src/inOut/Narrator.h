#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <locale>
#include "../player/Player.h"

class Narrator
{
public:
	Narrator();

	/**************For the console*************/
	void present();
	void distribRolesFinish();
	void enterPlayer(std::vector<Player>& players);
	uint16_t selectTypeOfRolesDistrib();
	void defineRolesNb(const size_t & nbPlayers, std::vector<uint16_t>& nbPlayersPerRoles, std::vector<std::unique_ptr<Role>>& roles);
	void showNbPlayersPerRoles(const std::vector<uint16_t>& nbPlayersPerRoles, std::vector<std::unique_ptr<Role>>& roles);
	void showNbPlayers(const size_t &nbPlayers);
	void sayRolesTurn(std::vector<std::vector<Player*>>& rolesArray);
};
