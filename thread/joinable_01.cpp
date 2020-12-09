#include <iostream>
#include <thread>
#include <chrono>

void func()
{
	std::this_thread::sleep_for(std::chrono::seconds{ 1 });
}

int main()
{
	std::cout << std::boolalpha;

	std::thread th;
	std::cout << "[1] : " << th.joinable() << '\n';

	th = std::thread{ func };
	std::cout << "[2] : " << th.joinable() << '\n';

	th.join();
	std::cout << "[3] : " << th.joinable() << '\n';
}
