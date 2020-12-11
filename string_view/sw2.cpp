#include <string_view>
#include <iostream>
#include <array>

int main()
{
	using namespace std;

	char str[] = "Bjarne Stroustrup";
	string s{ "cpp is the best programming language" };
	array<char, 6> ar{ 'n', 'e', 'c', 'a', 't', 'i' };


	string_view sv1;
	cout << "(" << sv1 << ")\n";

	string_view sv2 = "Necati Ergin";
	cout << "(" << sv2 << ")\n";

	string_view sv3{ str, 6 };
	cout << "(" << sv3 << ")\n";

	string_view sv4{ s }; 
	cout << "(" << sv4 << ")\n";

	string_view sv5{ s.data() + 11, 4 };
	cout << "(" << sv5 << ")\n";

	string_view sv6{ ar.data(), size(ar) };
	cout << "(" << sv6 << ")\n";
}


/*
	string_view sınıfının kurucu işlevleri
	sınıfın range parametreli kurucu işlevi yok. (Bu konuda bir öneri verilmiş)
*/
