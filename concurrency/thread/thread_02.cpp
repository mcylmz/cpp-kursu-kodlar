#include <iostream>
#include <thread>

int main()
{
	auto hello{ [] { std::cout << "Hello World!\n"; } };
	std::thread t{ hello };
	t.join();
}

