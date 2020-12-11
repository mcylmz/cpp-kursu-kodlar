#include <string_view>
#include <iostream>

int main()
{
	using namespace std;

	std::cout << "sizeof (char *) = " << sizeof(char *) << "\n";
	std::cout << "sizeof (size_t) = " << sizeof(size_t) << "\n";
	std::cout << "sizeof (string_view) = " << sizeof(string_view) << "\n";
}

/*
	bir string_view nesnesi aslında 2 pointer değişken (ya da bir pointer değişken bir de tamsayı) tutar.
	Böylece mülkiyeti bir başka kodda olan bir yazının bir parçasına (substring) okuma amaçlı erişebilir.
*/
