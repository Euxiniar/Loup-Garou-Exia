#pragma once
#include <string>
#include "AutoCompositionPercent.h"

class Role
{
public:
	Role();

	void setName(std::string name);
	virtual void setCompositionPorcent(double compositionPorcent);
	virtual double getCompositionPorcent();
	virtual const std::string getName();
	virtual void specialAction() = 0;

protected:
	std::string m_name;
	double m_autoCompositionPercent;
};
