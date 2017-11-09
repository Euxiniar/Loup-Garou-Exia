#include <conio.h>
#include "Application.h"

int main(int, char**)
{
	Application app;
	app.runMainGameLoop();
	_getch();
	return 0;
}
