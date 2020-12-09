#pragma once
#include <iostream>
#include <Windows.h>
#include <vector>
#include <chrono>
#include <random>
#include <thread>

class autoclicker {
public:
	static int sendClicks();
	static int randomize();
	static int getDInput();

	static int titleChanger();
};