#include <iostream>

template<typename T, int N, int M> 
bool less(T(&a)[N], T(&b)[M])
{
	for (int i = 0; i < N && i < M; ++i)
	{
		if (a[i] < b[i]) 
			return true; 
	
		if (b[i] < a[i]) 
			return false;
	} 
	
	return N < M;
}

int main()
{
	int a[] = { 3, 7, 9 };
	int b[] = { 3, 7, 9, 2, 6 };
	int c[] = { 3, 7, 9, 3, 6 };

	std::cout << std::boolalpha << less(a, b) << '\n';
	std::cout << std::boolalpha << less(c, b) << '\n';
}
