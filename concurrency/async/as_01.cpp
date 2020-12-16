#include <future>
#include <iostream>
#include <exception>
#include <stdexcept>
#include <iostream>

using namespace std;


int func()
{
	throw std::runtime_error{ "hata hata hata!!!\n" };
	return 1;
}

int main()
{
	try {
		auto f = async(launch::async, func);
		auto val = f.get();
		std::cout << "elde edilen deger : " << val << "\n";
	}
	catch (const std::exception& ex) {
		std::cout << "hata yakalandi : " << ex.what() << "\n";
	}
}
