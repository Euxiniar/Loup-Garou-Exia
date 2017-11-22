#pragma once
#include <string>
#include "RolesDefinition.h"

class Role
{
public:
	Role(uint16_t id, std::string name);

	virtual double getCompositionPorcent();
	virtual const std::string getName();
	virtual const std::uint16_t getId();
	virtual void specialAction() = 0;

protected:
	std::string m_name;
	double m_autoCompositionPercent;
	uint16_t m_id;
};
