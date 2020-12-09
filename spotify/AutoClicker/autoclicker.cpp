#include "autoclicker.h"

int minDelay;
int maxDelay;

int autoclicker::sendClicks() // Making it send mouse inputs
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

	return 0;
}


int autoclicker::getDInput() // Gets user input
{
	std::cout << "Minimum Delay: ";
	std::cin >> minDelay;
	std::cout << "Maximum Delay: ";
	std::cin >> maxDelay;

	return 0;
}


int autoclicker::randomize()
{
	std::mt19937_64 eng{ std::random_device{}() };  
	std::uniform_int_distribution<> dist{ minDelay, maxDelay };
	std::this_thread::sleep_for(std::chrono::milliseconds{ dist(eng) });

	return 0;
}

int autoclicker::titleChanger() // Yea i was bored so i did this, kinda looks cool in action
{
	system("title S");
	Sleep(50);
	system("title Sp");
	Sleep(50);
	system("title Spo");
	Sleep(50);
	system("title Spot");
	Sleep(50);
	system("title Spoti");
	Sleep(50);
	system("title Spotif");
	Sleep(50);
	system("title Spotify ");
	Sleep(50);
	system("title Spotify.");
	Sleep(50);
	system("title Spotify.e");
	Sleep(50);
	system("title Spotify.ex");
	Sleep(50);
	system("title Spotify.exe");
	Sleep(50);


	return 0;
}
