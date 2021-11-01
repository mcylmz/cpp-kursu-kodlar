#include <iostream>
#include <tuple>

template <typename ...Types>
class Mytuple : public std::tuple<Types* ...>{ //
	//
};

class Mytuple_ : public std::tuple<int*, double*> {

};

int main()
{
	Mytuple<int, double> x;
}
