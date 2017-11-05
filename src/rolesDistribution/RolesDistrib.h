#pragma once
#include "../inOut/Narrator.h"
#include <memory>

class RolesDistrib
{
public:
	RolesDistrib(Narrator &nar);
	void distribChoice();

private:
	int m_nbPlayers;
	std::unique_ptr<Narrator> m_nar;
};