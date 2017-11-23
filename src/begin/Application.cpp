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
	uint8_t timeZone{ DAY };

	while (howManyPlayersAlive() > 1)
	{	
		m_times.at(timeZone)->launchTime(m_playersTab, m_rolesArray);
	}
}

void Application::init()
{
	std::unique_ptr<Day> day(new Day(m_nar));
	m_times.push_back(std::move(day));
}

uint8_t Application::howManyPlayersAlive()
{
	uint8_t nbPlayersAlive{ 0 };
	for (uint8_t i = 0; i < m_playersTab.size(); i++)
	{
		if (m_playersTab.at(i).isAlive())
		{
			nbPlayersAlive++;
		}
	}
	return nbPlayersAlive;
}
