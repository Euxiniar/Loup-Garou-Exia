#include "Application.h"

Application::Application()
	: m_rolesDistrib(m_nar)
{
	init();
}

void Application::runMainGameLoop()
{
	m_nar.present();
	m_rolesDistrib.distribChoice();
}

void Application::init()
{
}
