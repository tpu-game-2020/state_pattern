#include <iostream>
#include <thread>

class State
{
public:
	void Credit();
	void Title();
	void Opening();
	void Demo();
};

void State::Credit()
{
	std::cout << "credit\n";

	std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
}

void State::Title()
{
	std::cout << "title\n";

	std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
}

void State::Opening()
{
	std::cout << "opening\n";

	std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
}

void State::Demo()
{
	std::cout << "demo\n";

	std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
}

int main()
{
	State show;

	while (1) {
		show.Credit();
		show.Title();
		show.Opening();
		show.Demo();
	}
}
