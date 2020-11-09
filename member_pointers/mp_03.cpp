#include <iostream>

struct A {
	int mx{ 10 };
	//...
};

int main()
{
	A ax;

	std::cout << "ax.mx = " << ax.mx << "\n";

	int A::* ptr = &A::mx;
	ax.*ptr = 100;
	std::cout << "ax.mx = " << ax.mx << "\n";
}
