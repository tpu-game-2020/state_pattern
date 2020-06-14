#include <iostream>
#include <thread>

enum Mode 
{
	credit,
	title,
	opening,
	demo,
	null
};

void State(int mode)
{
	switch (mode)
	{
	case Mode::credit:
		std::cout << "credit\n";
		std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
		break;
	case Mode::title:
		std::cout << "title\n";
		std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
		break;
	case Mode::opening:
		std::cout << "opening\n";
		std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
		break;
	case  Mode::demo:
		std::cout << "demo\n";
		std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
		break;
	default:
		break;
	}
}


int main()
{
	while (true)
	{
		for (int i = 0; i < (int)Mode::null; i++) 
		{
			State(i);
		}
	}
}


