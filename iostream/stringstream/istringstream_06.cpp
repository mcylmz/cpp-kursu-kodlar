#include <sstream>
#include <iostream>

int main()
{
	using namespace std;

	istringstream iss{ "0123456789BABADEDE" };

	int c;

	while ((c = iss.get()) != EOF) {
		cout << c << " " << (char)c << "\n";
	}
}
