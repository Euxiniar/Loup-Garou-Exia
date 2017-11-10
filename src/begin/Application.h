#pragma once
#include <iostream>
#include "../inOut/Narrator.h"
#include "../rolesDistribution/Distribution.h"

class Application
{
public:
	Application();

	void runMainGameLoop();

private:
	void init();
	std::vector<std::list<Player>> m_rolesArray;
	std::list<Player> m_playersTab;
	Distribution m_distribution;
	Narrator m_nar;
	

	//Game_State state;
	//Vote vote;
};
