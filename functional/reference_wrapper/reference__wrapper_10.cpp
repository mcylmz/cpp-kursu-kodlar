#include <functional>
#include <iostream>


int foo(int x)
{
	return x * 5 + 10;
}

int bar(int x)
{
	return x * 3 + 4;
}

int main()
{
	using namespace std;

	reference_wrapper f = foo;
	cout << f(12) << "\n";
	f = bar;
	cout << f(12) << "\n";

}
