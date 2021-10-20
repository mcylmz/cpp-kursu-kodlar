#include <iostream>

int main()
{
	for (struct { int x; double f; }a{ 1, 3.4 }; a.x < 100; ++a.x, a.f += 0.2) {
		std::cout << a.x << " " << a.f << "\n";
	}
}
