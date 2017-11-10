#pragma once
#include <string>

class Role
{
public:
	Role(std::string name);
	Role(std::string name, double compositionPorcent);
	Role();

	void setName(std::string name);
	void setCompositionPorcent(double compositionPorcent);
	double getCompositionPorcent();
	const std::string getName();

private:
	std::string m_name;
	double m_autoCompositionPorcent;
};
