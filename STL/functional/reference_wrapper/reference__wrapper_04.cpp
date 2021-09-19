//CTAD for reference_wrapper 

#include <functional>
#include <iostream>

using namespace std;

int main()
{
	string s{ "neco" };

	reference_wrapper r = s;
	cout << r.get() << "\n";
}
