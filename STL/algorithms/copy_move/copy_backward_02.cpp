#include <vector>
#include <algorithm>
#include <iostream>


using namespace std;

int main()
{
	vector<int> ivec{ 10, 20, 30, 40, 50 };
	vector<int> dest(ivec.size() * 2);

	copy_backward(ivec.begin(), ivec.end(), dest.end());
	for (auto i : dest)
		std::cout << i << " ";
}
