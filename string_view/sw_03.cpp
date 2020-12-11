#include <string_view>
#include <iostream>

int main()
{
	using namespace std;

	string_view sv;
	cout << boolalpha << (sv.data() == nullptr) << "\n";
	cout << boolalpha << sv.empty() << "\n";
	cout << boolalpha << (sv.size() == 0) << "\n";
	cout << "\n\n";

	sv = "ali";
	cout << boolalpha << (sv.data() == nullptr) << "\n";
	cout << boolalpha << sv.empty() << "\n";
	cout << boolalpha << (sv.size() == 0) << "\n";
	cout << "\n\n";
}


/*
	- varsayılan kurucu işlevle oluşturulmuş bir string_view nesnesi boştur.
	- data üye işlevi nullptr değerini döndürür
	- size üye işlevi 0 değerini döndürür.
	- empty üye işlevi true değerini döndürür.
*/
