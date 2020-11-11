#include <string>
#include <random>
#include <conio.h>
#include <iostream>
#include <algorithm>


int main()
{
	using namespace std;

	string s{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	mt19937 eng{ random_device{}() };

	while (true) {
		cout << s << "\n";
		shuffle(begin(s), end(s), eng);
		(void)_getch();
		std::system("cls");
	}
}
