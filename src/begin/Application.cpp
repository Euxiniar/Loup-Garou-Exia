#include "Application.h"

Application::Application()
	: m_distribution(m_nar, m_playersTab, m_rolesArray)
{
	init();
}

void Application::runMainGameLoop()
{
	m_nar.present();
	m_distribution.distribPlayers();
	m_distribution.distribRoles();
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
