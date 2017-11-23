#include "Villager.h"

Villager::Villager()
	: Role(VILLAGER, NO_ACTIVITY, "Villageois")
{
	m_autoCompositionPercent = VILLAGER_PERCENT;
}

void Villager::specialAction()
{
}
