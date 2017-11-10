#pragma once
#include <iostream>
#include "../inOut/Narrator.h"
#include "../rolesDistribution/Distribution.h"
#include "../time/Day.h"

#define DAY 0
#define NIGHT 1

class Application
{
public:
	Application();

	void runMainGameLoop();

private:
	void init();
	std::vector<std::list<Player>> m_rolesArray;
	std::list<Player> m_playersTab;
	std::vector<Time> m_times;

	Distribution m_distribution;
	Narrator m_nar;
	

	//Game_State state;
	//Vote vote;
};
