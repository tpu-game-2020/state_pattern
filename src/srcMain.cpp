#include <iostream>
#include <thread>
#include"State.h"

class creditState : public StatePattern
{
public:
    void State()
    {
        std::cout << "credit\n";

        std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
    }
};

class titleState : public StatePattern
{
public:
    void State()
    {
        std::cout << "title\n";

        std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
    }
};

class openingState : public StatePattern
{
public:
    void State()
    {
        std::cout << "opening\n";

        std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
    }
};

class demoState : public StatePattern
{
public:
    void State()
    {
        std::cout << "demo\n";

        std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
    }
};
void Call(StatePattern* statepatternObj)
{
    statepatternObj->State();
    return;
};



int main()
{
    while (1)
    {
        StatePattern* credit = new creditState();StatePattern* title   = new titleState();
        StatePattern* demo   = new demoState();  StatePattern* opening = new openingState();
       
        Call(credit);
        Call(title);
        Call(opening);
        Call(demo);
        delete credit, title, opening, demo;
    }
    return 0;
}

