#include <iostream>
#include <thread>
#include <stdio.h>

class GameStateBase {

public:
    virtual GameStateBase* Process() {
        return nullptr;
    }

};


class DemoState : public GameStateBase
{

public:
    virtual GameStateBase* Process()
    {
        printf("demo\n");
        std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
        return nullptr;
    }

};

class OpeningState : public GameStateBase
{

public:
    virtual GameStateBase* Process()
    {
        printf("opening\n");
        std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
        return new DemoState();
    }

};

class TitleState :public GameStateBase
{

public:
    virtual GameStateBase* Process()
    {
        printf("title\n");
        std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
        return new OpeningState();
    }

};

class CreditState :public GameStateBase
{

public:
    virtual GameStateBase* Process()
    {
        printf("credit\n");
        std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
        return new TitleState();
    }

};
