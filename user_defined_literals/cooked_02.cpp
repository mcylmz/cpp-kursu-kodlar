//cooked usef defined literals

constexpr double operator"" _fag(long double fdegrees)
{
	return static_cast<double>((fdegrees - 32) / 1.8);
}

#include <iostream>

using namespace std;


int main()
{
	std::cout << 34.87_fag;
}
