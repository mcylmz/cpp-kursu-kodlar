#include <functional>
#include <iostream>

using namespace std;

int main()
{
	int x = 15, y = 45;

	reference_wrapper<int> r = x;

	r = y;
	std::cout << "x = " << x << "\n";
	r.get() = x;
	std::cout << "y = " << y << "\n";
}
