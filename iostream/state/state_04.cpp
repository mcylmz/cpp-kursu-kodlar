#include <iostream>
#include <iomanip>
#include <bitset>

void display_state(const std::istream& is)
{
	if (is.rdstate() == 0) {
		std::cout << "akim good durumunda\n";
		return;
	}

	if (is.rdstate() & std::ios::failbit) {
		std::cout << "fail bit set edilmis durumda\n";
	}

	if (is.rdstate() & std::ios::eofbit) {
		std::cout << "eof bit set edilmis durumda\n";
	}

	if (is.rdstate() & std::ios::badbit) {
		std::cout << "bad bit set edilmis durumda\n";
	}
}


int main()
{
	using namespace std;

	display_state(cin);

	int ival;
	cout << "bir sayi giriniz: ";
	cin >> ival;

	display_state(cin);
}
