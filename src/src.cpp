#include <iostream>
#include <thread>
#include <stdio.h>
#include "State.cpp"

int main()
{

    while (true)
    {
        GameStateBase* now = new CreditState();
        while (now != nullptr)
        {
            now = now->Process();
        }
    }
}
