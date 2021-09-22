#include <iostream>
#include <type_traits>
#include <memory>
#include <string>

template <typename T, typename ...Args>
std::unique_ptr<T> MakeUnique(Args && ...args)
{
	return std::unique_ptr<T> {new T(std::forward<Args>(args)...)};
}

int main()
{
	auto uptr = MakeUnique<std::string>(12, 'A');
	std::cout << *uptr << "\n";
}
