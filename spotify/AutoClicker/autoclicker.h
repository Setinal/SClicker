#pragma once
#include <iostream>
#include <Windows.h>
#include <vector>
#include <chrono>
#include <random>
#include <thread>
#include <future>

class autoclicker {
public:
	static void sendClicks();
	static void randomize();
	static void getDInput();
	static void titleChanger();
};