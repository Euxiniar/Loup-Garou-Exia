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
	uint16_t timeZone{ DAY };

	while (m_playersTab.size() != 0)
	{	
		m_times.at(timeZone)->launchTime(m_playersTab, m_rolesArray);
	}
}

void Application::init()
{
	std::unique_ptr<Day> day(new Day(m_nar));
	m_times.push_back(std::move(day));
}  
