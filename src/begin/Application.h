#pragma once
#include <iostream>
#include "../inOut/Narrator.h"
#include "../rolesDistribution/RolesDistrib.h"

class Application
{
public:
	Application();

	void runMainGameLoop();


private:
	void init();

	RolesDistrib m_rolesDistrib;
	Narrator m_nar;
	//Game_State state;
	//Vote vote;
};