#include <iostream>

template <size_t n>
struct factorial {
	constexpr static size_t value = n * factorial<n - 1>::value;
};

template <>
struct factorial<0> {
	constexpr static size_t value = 1;
};


int main()
{
	constexpr auto val = factorial<5>::value;
}
