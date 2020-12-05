#include <iostream>

template<typename T, typename U>
struct A 
{
	A() { std::cout << "primary template\n"; }
};

template<typename X>
struct A <X, X> {
	A() { std::cout << "specialization<X, X>\n"; }
};

int main()
{
	A<int, int> x;
	A<int, double> y;
	A<int *, const int *> z;
	//
}
