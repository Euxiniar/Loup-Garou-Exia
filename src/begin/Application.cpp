#include "Application.h"

Application::Application()
	: m_distribution(m_nar)
{
	init();
}

void Application::runMainGameLoop()
{
	m_nar.present();
	m_distribution.distribPlayers();
	m_distribution.distribRoles();
}

void Application::init()
{
}
