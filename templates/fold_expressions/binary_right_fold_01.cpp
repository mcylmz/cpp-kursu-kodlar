#include <utility>

//binary right fold

template<typename ...Args>
auto sum(Args&& ...args)
{
	return (std::forward<Args>(args) + ... + 10);
}

#include <iostream>

int main()
{
	std::cout << sum(12, 4.5, 50L) << "\n";
}
