#include <iostream>

int main()
{
	using namespace std;

	//if (cin)
	if (cin.good())
		cout << "cin nesnesi iyi durumda\n";
	else
		cout << "cin nesnesi hata durumunda\n";

	int ival;
	cout << "bir sayi giriniz: ";
	cin >> ival;

	if (cin.good())
		cout << "cin nesnesi iyi durumda\n";
	else
		cout << "cin nesnesi hata durumunda\n";
}
