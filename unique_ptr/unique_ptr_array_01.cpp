#include <memory>
#include <iostream>
#include "triple.h"	

int main()
{
	using namespace std;

	std::unique_ptr<Triple[]> uptr{ new Triple[3]{ {1, 1, 1}, {2, 2, 2}, {3, 3, 3} } };
}
