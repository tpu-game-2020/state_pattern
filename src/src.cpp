#include <iostream>
#include <thread>

class State
{
public:
	virtual void Scene() {}
};

class CreditState :public State
{
public:
	virtual void Scene()
    {
    std::cout << "credit\n";

    std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
    }
};

class TitleState :public State
{
public:
	virtual void Scene()
	{
    std::cout << "title\n";

    std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
    }
};

class OpeningState :public State
{
public:
	virtual void Scene()
	{
    std::cout << "opening\n";

    std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
    }
};

class DemoState :public State
{
public:
	virtual void Scene()
	{
    std::cout << "demo\n";

    std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
    }
};

int main()
{
	State* state_;

	CreditState credit;
	TitleState title;
	OpeningState opening;
	DemoState demo;

	while (true)
	{		
		state_ = &credit;
		state_->Scene();

		state_ = &title;
		state_->Scene();

		state_ = &opening;
		state_->Scene();

		state_ = &demo;
		state_->Scene();
	}
}
