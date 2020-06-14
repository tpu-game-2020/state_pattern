#include <iostream>
#include <thread>

class SwitchState {
public:
	virtual ~SwitchState() {}
	virtual void credit() {}
	virtual void title() {}
	virtual void opening() {}
	virtual void demo() {}

};

class Switch:public SwitchState {
public:Switch() {}

		virtual void credit() {
			std::cout << "credit\n";
			std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
		}
		virtual void title() {
			std::cout << "title\n";
			std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
		}
		virtual void opening() {
			std::cout << "opening\n";
			std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
		}
		virtual void demo() {
			std::cout << "demo\n";
			std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
		}
	
};

int main() {
	Switch sw;
	do {
		sw.credit();
		sw.title();
		sw.opening();
		sw.demo();
	} while (0);
}
