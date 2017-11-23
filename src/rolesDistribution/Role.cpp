#include "Role.h"

Role::Role(uint16_t id, uint16_t activityPeriod, std::string name)
	: m_id(id), m_name(name), m_activityPeriod(activityPeriod)
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

const std::uint16_t Role::getActivityPeriod()
{
	return m_activityPeriod;
}

void Role::specialAction()
{
}
