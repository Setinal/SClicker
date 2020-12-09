#include "main.h"

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int main()
{
	autoclicker::titleChanger();
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
	ascii::ascii1();
	SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
	autoclicker::getDInput();


	while (true)
	{
			if (GetAsyncKeyState(VK_XBUTTON2)) // If the second side button is held, send clicks.
			{
				autoclicker::sendClicks();
			}
	}

}
