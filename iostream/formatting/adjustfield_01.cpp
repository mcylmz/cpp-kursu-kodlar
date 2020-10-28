#include <iostream>

int main()
{
	using namespace std;
	//cout.setf(ios::left, ios::adjustfield);
	//cout.setf(ios::right, ios::adjustfield);
	//cout.setf(ios::internal, ios::adjustfield);
	//cout.setf(ios::showpos);
	cout << "ios::left     : " << (cout.flags() & ios::left ? "set" : "unset") << "\n";
	cout << "ios::right    : " << (cout.flags() & ios::right ? "set" : "unset") << "\n";
	cout << "ios::internal : " << (cout.flags() & ios::internal ? "set" : "unset") << "\n";

	cout.width(20);
	cout << 3456 << "necati\n";
}
