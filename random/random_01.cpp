#include <random>
#include <iostream>

using namespace std;

int main()
{
	cout << typeid(mt19937).name() << "\n\n\n";
	cout << typeid(mt19937_64).name() << \n\n\n";
	
	cout << "sizeof(mt19937)    = " << sizeof(mt19937) << "\n";
	cout << "sizeof(mt19937_64) = " << sizeof(mt19937_64) << "\n";
}
