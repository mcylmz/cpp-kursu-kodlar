#include <ostream>
#include <map>
#include <random>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <random>
#include <algorithm>
#include <iterator>
#include <conio.h>  //non-standard header for _getch()

int main()
{
	using namespace std;

	vector<int> ivec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	mt19937 eng{ random_device{}() };

	while (true) {
		copy(ivec.begin(), ivec.end(), ostream_iterator<int>{cout, "  "});
		shuffle(ivec.begin(), ivec.end(), eng);
		(void)_getch();
		std::system("cls");
	}
}
