#include <stdexcept>
#include <iostream>

int func()
{
	return -1;
}

int main()
{
	auto x = func();

	try {
		auto y = x > 0 ? x : throw std::runtime_error{ "hata" };
		std::cout << "y = " << y << "\n";

	}
	catch (const std::exception& ex) {
		std::cout << "exception caught: " << ex.what() << '\n';
	}
}
