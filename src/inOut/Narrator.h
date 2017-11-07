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

	/**************Pour la console*************/
	void present();
	void enterPlayer(std::list<Player> &players);
	uint16_t selectTypeOfRolesDistrib();
};