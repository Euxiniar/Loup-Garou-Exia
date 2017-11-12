#pragma once
#include "Role.h"

class Werewolf : public Role
{
	public:
	Werewolf();

	void specialAction() override;
};