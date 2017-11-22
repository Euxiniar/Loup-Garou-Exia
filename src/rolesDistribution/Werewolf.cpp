#include "Werewolf.h"

Werewolf::Werewolf()
	: Role(WEREWOLF, "Loup-Garou")
{
	m_autoCompositionPercent = WEREWOLF_PERCENT;
}

void Werewolf::specialAction()
{
}
