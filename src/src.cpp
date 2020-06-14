#include <iostream>
#include <thread>
#include<string>

enum Mode 
{
	credit,
	title,
	opening,
	demo,
	moed_max
};

Mode Credit() 
{
	std::cout << "credit\n";
	std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
	return Mode::title;
}

Mode Title()
{
	std::cout << "title\n";
	std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
	return Mode::opening;
}

Mode Opening() 
{
	std::cout << "opening\n";
	std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
	return Mode::demo;
}

Mode Demo() 
{
	std::cout << "demo\n";
	std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
	return Mode::credit;
}

typedef Mode(*fptr) ();

static const struct Base
{
	fptr func;
};

class State 
{ 
private:
	Base swithState[Mode::moed_max] = { Credit,Title,Opening,Demo };
	 
public:
	const Mode SwithState(Mode mode) { return swithState[mode].func(); };
};

int main()
{
	char str[255] = { (char)Mode::credit };
	State state;

	for (Mode i = Mode::credit; i < Mode::moed_max;) 
	{
		i = state.SwithState(i);
	}

}


