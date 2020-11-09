#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
	using dsec = duration<double>;

	cout << (543ms == 543000us) << "\n";
	cout << (543ms < 543001us) << "\n";
	cout << (543ms < 543001us) << "\n";
	cout << (dsec{ 0.5 } < 543ms) << "\n";
}
