#include <iostream>

int main()
{
	using namespace std;
	int x{};

	//while (cin.operator>>(x).operator bool())
	while (cin) {
		cin >> x;
		cout << hex << x << "\n";
	}
}
