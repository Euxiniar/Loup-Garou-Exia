#include <iostream>
#include <conio.h>
#include <memory>
#include "Application.h"

int main(int, char**)
{
	Application app;
	app.runMainGameLoop();
	_getch();
	return 0;
}
