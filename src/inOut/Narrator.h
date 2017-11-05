#pragma once
#include <iostream>

class Narrator
{
public:
	Narrator();

	/**************Pour la console*************/
	void present();
	int askNbPlayers();
	void askName();
};