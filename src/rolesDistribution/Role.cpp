#include "Role.h"

Role::Role()
{
}

void Role::setName(std::string name)
{
	m_name = name;
}

void Role::setCompositionPorcent(double compositionPorcent)
{
	m_autoCompositionPercent = compositionPorcent;
}

double Role::getCompositionPorcent()
{
	return m_autoCompositionPercent;
}

const std::string Role::getName()
{
	return m_name;
}

void Role::specialAction()
{
}
