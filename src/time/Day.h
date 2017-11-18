#pragma once
#include "Time.h"


class Day : public Time
{
public:
	Day(Narrator& nar);
	void launchTime(std::vector<Player>& players, std::vector<std::vector<Player*>>& rolesArray);
};