#include "Werewolf.h"

Werewolf::Werewolf()
	: Role(WEREWOLF, NIGHT_ACTIVITY, "Loup-Garou")
{
	m_autoCompositionPercent = WEREWOLF_PERCENT;
}

void Werewolf::specialAction()
{
}
