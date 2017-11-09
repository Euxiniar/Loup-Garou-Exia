#pragma once
#include <string>

class Role
{
public:
	Role(std::string name);
	Role();
	void setName(std::string name);
	const std::string getName();

private:
	std::string m_name;
	double m_autoCompositionPorcent;
};