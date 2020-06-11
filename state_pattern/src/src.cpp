#include <iostream>
#include <thread>
#include "State.cpp"

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

