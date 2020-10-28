#include <sstream>
#include <iostream>

int main()
{
	using namespace std;

	int x;

	cout << "bir sayi girin: ";
	cin >> x;

	ostringstream oss;

	oss << x << "|" << hex << x << "|" << oct << x << "|";

	cout << oss.str() << "\n";
}
