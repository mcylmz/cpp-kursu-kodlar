#include <memory>
#include "triple.h"
#include <iostream>


void func()
{
	//throw std::exception{};
}

int main()
{
	std::cout << "main basladi\n";


	try {
		std::unique_ptr<Triple>upx(new Triple{ 10, 20, 30 });

		std::cout << (upx ? "dolu" : "bos") << "\n";
		std::cout << *upx << "\n";
		upx->set(3, 6, 7);
		func();
		std::cout << *upx << "\n";
		std::cout << "blok sonu\n";
	}
	catch (const std::exception& ex) {
		std::cout << "hata yakalandi: " << ex.what() << "\n";

	}

	std::cout << "main devam ediyor\n";
}
