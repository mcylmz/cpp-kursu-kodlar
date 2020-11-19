#include <exception>
#include <iostream>
#include "nutility.h"

void func()
{
	throw std::exception{};
}

void foo()noexcept
{
	func();
}

int main()
{
	std::set_terminate(&my_terminate);

	try {
		foo();
	}
	catch (const std::exception& ex) {
		std::cout << "hata yakalandi : " << ex.what() << "\n";
	}
}
