#include <iostream>
#include <vector>

using namespace std;

int main()
{
	auto f = []<typename T>(const vector<T> &x, const vector<T> &y) { 
		//...
	};

	vector<int> vx;
	vector<int> vy;

	f(vx, vy);

}
