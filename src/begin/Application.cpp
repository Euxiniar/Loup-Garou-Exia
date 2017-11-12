#include "Application.h"

Application::Application()
	: m_distribution(m_nar)
{
	init();
}

void Application::runMainGameLoop()
{
	m_nar.present();
	m_distribution.distribPlayers(m_playersTab);
	m_distribution.distribRoles(m_playersTab, m_rolesArray);
	uint16_t timeZone{ NIGHT };

	while (m_playersTab.size() != 0)
	{	
		m_playersTab.erase(m_playersTab.begin());
	}
}

void Application::init()
{
	Day day(m_playersTab);
	m_times.push_back(day);
}  
