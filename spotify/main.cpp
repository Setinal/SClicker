#include "main.h"
#include <iostream>
#include <stdlib.h>
#include <windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


int main()
{
	autoclicker::titleChanger();
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
	ascii::ascii1();
	SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
	std::cout << "Enter Min and Max delays for the clicks, values in miliseconds\nMin and Max of 1 = Maximum possible cps\nMin of 1 and Max of 50 = 20 cps\nMin of 1 and Max of 100 = 10 cps\n" << std::endl;
	autoclicker::getDInput();
	std::cout << "\nHold down RIGHT CLICK to toggle the clicker";
    while(true){
        while((GetKeyState(VK_RBUTTON) & 0x8000) != 0){
            autoclicker::sendClicks();
        }
        Sleep(10);
    }

}








