#include "Villager.h"

Villager::Villager()
	: Role(VILLAGER, "Villageois")
{
	m_autoCompositionPercent = VILLAGER_PERCENT;
}

void Villager::specialAction()
{
}
