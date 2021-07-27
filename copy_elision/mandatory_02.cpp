#include <iostream>

struct A {
	A(int x)
	{
		std::cout << "default ctor x = " << x << "\n";
	}

	A(const A&) = delete;
	A(A &&) = delete;
};

void func(A) { }

A foo()
{
	return A{3};
}

int main()
{
	A ax = A{1};
	func(A{2});
	A ay = foo();
}
