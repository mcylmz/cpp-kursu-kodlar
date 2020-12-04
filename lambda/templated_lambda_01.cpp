#include <iostream>

using namespace std;

int main()
{
	auto f = []<typename T>(T x, T y) { return x + y; };

	cout << f(34, 39) << "\n";
	cout << f(.22, .34) << "\n";
	//cout << f(55, .34) << "\n";  //gecersiz
}
