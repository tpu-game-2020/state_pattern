#include <iostream>
#include <thread>

class ThreadState {
public :
    ~ThreadState() {};
    virtual void Action() {};

};

class CreditThread :ThreadState {
public:
    ~CreditThread() {};
    virtual void Action() {
        std::cout << "credit\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
    }
};
class TitleThread :ThreadState {
public:
    ~TitleThread() {};
    virtual void Action() {
        std::cout << "title\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
    }
};
class OpeningThread :ThreadState {
public:
    ~OpeningThread() {};
    virtual void Action() {
        std::cout << "opening\n";
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }
};
class DemoThread :ThreadState {
public:
    ~DemoThread() {};
    virtual void Action() {
        std::cout << "demo\n";
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }
};

int main()
{
    CreditThread ct;
    TitleThread tt;
    OpeningThread ot;
    DemoThread dt;
    while (true) {
        ct.Action();
        tt.Action();
        ot.Action();
        dt.Action();
    }
}
