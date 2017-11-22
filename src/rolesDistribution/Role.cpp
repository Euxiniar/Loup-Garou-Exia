#include "Role.h"

Role::Role(uint16_t id, std::string name)
	: m_id(id), m_name(name)
{
}

double Role::getCompositionPorcent()
{
	return m_autoCompositionPercent;
}

const std::string Role::getName()
{
	return m_name;
}

const std::uint16_t Role::getId()
{
	return m_id;
}

void Role::specialAction()
{
}
