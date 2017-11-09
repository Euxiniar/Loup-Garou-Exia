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

	Distribution m_distribution;
	Narrator m_nar;
	//Game_State state;
	//Vote vote;
};