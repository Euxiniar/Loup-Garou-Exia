#pragma once
#include <iostream>
#include <list>
#include <locale>
#include "../players/Player.h"

class Narrator
{
public:
	Narrator();

	/**************Pour la console*************/
	void present();
	void enterPlayer(std::list<Player> &players);
};