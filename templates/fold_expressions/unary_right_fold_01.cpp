//unary right fold

#include <utility>

template<typename ...Args>
auto sum(Args&& ...args)
{
	return (std::forward<Args>(args) + ...);
}

#include <iostream>

int main()
{
	std::cout << sum(12, 4.5, 50L) << "\n";
}
