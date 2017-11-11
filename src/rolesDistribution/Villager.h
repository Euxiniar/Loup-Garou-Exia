#pragma once
#include "Role.h"

class Villager : public Role
{
public:
	Villager();
	void specialAction() override;
};