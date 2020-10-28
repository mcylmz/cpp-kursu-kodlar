#include <iostream>
#include <fstream>

int main()
{
	using namespace std;
	ifstream ifs{ "ahmet.txt" };

	if (!ifs) {
		cout << "dosya acilamadi\n";
	}
}
