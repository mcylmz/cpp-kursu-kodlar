#include <iostream>

int main()
{
	using namespace std;

	int x{};

	cout << "bir sayi giriniz: ";
	cin >> x;

	cout << boolalpha << "eof : " << cin.eof() << "\n";
	cout << boolalpha << "fail : " << cin.fail() << "\n";
	cout << boolalpha << "bad : " << cin.bad() << "\n";

	cout << "girdiginiz sayi = " << x << "\n";
}
