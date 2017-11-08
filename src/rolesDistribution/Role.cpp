#include "Role.h"

Role::Role(std::string name)
	: m_name(name)
{
}

Role::Role()
{
}

void Role::setName(std::string name)
{
	m_name = name;
}
