#pragma once
#include <string>

class Role
{
public:
	Role(std::string name);
	Role();
	void setName(std::string name);

private:
	std::string m_name;
	double m_autoCompositionPorcent;
};