#include <string_view>
#include <iostream>

using namespace std;

int main()
{
	string str{ "necati ergin" };

	string_view sw{ str };
	std::cout << "[" << sw << "]\n";
	str.front() = 'X';
	str.back() = 'X';
	std::cout << "[" << sw << "]\n";
	str.append(500, 'A');
	std::cout << "[" << sw << "]\n"; //ub
}
