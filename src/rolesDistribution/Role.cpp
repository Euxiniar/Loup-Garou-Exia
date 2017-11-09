#include "Role.h"

Role::Role(std::string name)
	: m_name(name)
{
}

Role::Role(std::string name, double compositionPorcent)
	:m_name(name), m_autoCompositionPorcent(compositionPorcent)
{
}

Role::Role()
{
}

void Role::setName(std::string name)
{
	m_name = name;
}

void Role::setCompositionPorcent(double compositionPorcent)
{
	m_autoCompositionPorcent = compositionPorcent;
}

double Role::getCompositionPorcent()
{
	return m_autoCompositionPorcent;
}

const std::string Role::getName()
{
	return m_name;
}
