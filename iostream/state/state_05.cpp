#include <iostream>
#include <iomanip>
#include <string>


int main()
{
	using namespace std;
	
	int x{};

	while (std::cout << "bir tamsayi girin: " && !(std::cin >> x)) {
		cin.clear();
		string line;
		getline(cin, line);
		cout << "[" << line << "] gecerli tam sayi degil\n";
	}

	cout << "giris basarili : " << x << "\n";

}
