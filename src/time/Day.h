#pragma once
#include "Time.h"


class Day : public Time
{
public:
	Day(std::list<Player> &players);
	void launchTime();
};