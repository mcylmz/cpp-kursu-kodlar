#include <memory>
#include "triple.h"
#include <iostream>

template<typename T, typename ...Args>
std::unique_ptr<T> MakeUnique(Args && ...args)
{
	return std::unique_ptr<T> {new T(std::forward<Args>(args)...)};
}

int main()
{
	std::cout << "main basladi\n";
	auto uptr = MakeUnique<Triple>(10, 20, 30);

	std::cout << *uptr << "\n";
	uptr->set(3, 4, 7);
	std::cout << *uptr << "\n";
}
