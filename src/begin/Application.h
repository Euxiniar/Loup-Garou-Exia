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
	std::vector<std::vector<Player*>> m_rolesArray;
	std::vector<Player> m_playersTab;
	std::vector<std::unique_ptr<Time>> m_times;
	uint8_t howManyPlayersAlive();
	Distribution m_distribution;
	Narrator m_nar;
	

	//Game_State state;
	//Vote vote;
};
