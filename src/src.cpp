#include <iostream>
#include <thread>
#define CREDIT 0
#define TITLE 1
#define OPENING 2
#define DEMO 3

class startscreen
{
public:
    virtual void 0()
    virtual void 1()
    virtual void 2()
    virtual void 3()
};
int main()
{
    	int count = 0;

	while (true)
	{	
		switch (count % 4)
		{
		case CREDIT:
			Credit();
			break;
		case TIME_UTC:
			Title();
			break;
		case OPENING:
			Opening();
			break;
		case DEMO:
			Demo();
			break;
		default:
			break;
		}

		count++;

		std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
	}
}

void Credit() 
{
	std::cout << "credit\n";
}
void Title() 
{
	std::cout << "title\n";
}
void Opening() 
{
	std::cout << "opening\n";
}
void Demo() 
{
	std::cout << "demo\n";
}
