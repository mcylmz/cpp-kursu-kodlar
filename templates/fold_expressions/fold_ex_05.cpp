//fold expressions with comma operator (unary right fold) (unary left fold)

#include <vector>

//unary right fold
template<typename T, typename... Args>
void vpushback1(std::vector<T>& v, Args&& ...args)
{
	(v.push_back(std::forward<Args>(args)), ...);
}

//unary left fold
template<typename T, typename... Args>
void vpushback2(std::vector<T>& v, Args&& ...args)
{
	(..., v.push_back(std::forward<Args>(args)));
}

#include <iostream>

int main()
{
	std::vector<int> vec;
	vpushback1(vec, 2, 3, 5, 7, 11, 13);

	for (auto i : vec)
		std::cout << i << "\n";
}
