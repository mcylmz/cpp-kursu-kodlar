#include <string_view>
#include <iostream>

int main()
{
	using namespace std;

	cout << boolalpha;

	string_view sv;
	cout << (sv.data() == nullptr) << "\n";
	cout << sv.empty() << "\n";
	cout << (sv.size() == 0) << "\n";
	cout << "\n\n";

	sv = "ali";
	cout << (sv.data() == nullptr) << "\n";
	cout << sv.empty() << "\n";
	cout << (sv.size() == 0) << "\n";
	cout << "\n\n";
}


/*
	- varsayılan kurucu işlevle oluşturulmuş bir string_view nesnesi boştur.
	- data üye işlevi nullptr değerini döndürür
	- size üye işlevi 0 değerini döndürür.
	- empty üye işlevi true değerini döndürür.
*/
