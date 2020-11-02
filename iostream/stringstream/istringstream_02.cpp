#include <sstream>
#include <string>
#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;

	istringstream iss{ "ali topu tut ayse ip atla" };
	string word;

	int cnt{};

	while (iss >> word) {
		cout << setw(2) << ++cnt << " " << word << "\n";
	}
}
