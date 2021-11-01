#include <iostream>
#include <tuple>

template <typename ...Types>
class Mytuple : public std::tuple<Types...>{
public:
	constexpr static size_t size = sizeof...(Types);
};

int main()
{
	constexpr auto n = Mytuple<int, double>::size;
}
