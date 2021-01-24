#include <ratio>
#include <iostream>

template<intmax_t x, intmax_t y>
std::ostream& operator<<(std::ostream& os, std::ratio<x, y> r)
{
	return os << x << " / " << y;
}

int main()
{
	using namespace std;
	cout << peta{} << "\n";
	cout << exa{} << "\n";
	cout << tera{} << "\n";
	cout << giga{} << "\n";
	cout << mega{} << "\n";
	cout << kilo{} << "\n";
	cout << hecto{} << "\n";
	cout << deca{} << "\n";
	cout << deci{} << "\n";
	cout << centi{} << "\n";
	cout << milli{} << "\n";
	cout << micro{} << "\n";
	cout << nano{} << "\n";
	cout << pico{} << "\n";
	cout << femto{} << "\n";
	cout << atto{} << "\n";
}
