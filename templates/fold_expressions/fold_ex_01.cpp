//unary left fold

template<typename... Args>
bool all(Args... args)
{
	return (... && args);
}

#include <iostream>

int main()
{
	std::cout << std::boolalpha << all(true, true, true, true) << "\n";
	std::cout << std::boolalpha << all(true, true, true, false) << "\n";

}
