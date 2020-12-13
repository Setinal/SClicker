#include "autoclicker.h"
#include <Windows.h>

int minDelay;
int maxDelay;

void autoclicker::sendClicks() // Making it send mouse inputs
{
	INPUT input = { 0 };
	input.type = INPUT_MOUSE;
	input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
	SendInput(1, &input, sizeof(input));
	ZeroMemory(&input, sizeof(input));
	autoclicker::randomize();
	input.type = INPUT_MOUSE;
	input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
	SendInput(1, &input, sizeof(input));
	autoclicker::randomize();
}


void autoclicker::getDInput() // Gets user input
{
	std::cout << "Minimum Delay: ";
	std::cin >> minDelay;
	std::cout << "Maximum Delay: ";
	std::cin >> maxDelay;
}


void autoclicker::randomize()
{
	std::mt19937_64 eng{ std::random_device{}() };
	std::uniform_int_distribution<> dist{ minDelay, maxDelay };
	std::this_thread::sleep_for(std::chrono::milliseconds{ dist(eng) });
}

void autoclicker::titleChanger() // Yea i was bored so i did this, kinda looks cool in action
{
    std::string str = "Spotify.exe";
    for(int i = 0; i <= str.length(); i++){
        std::string part = "title " + str.substr(0, i);
        system(part.c_str());
        Sleep(50);
    }
}
