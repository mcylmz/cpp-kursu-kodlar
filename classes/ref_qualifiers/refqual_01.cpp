#include <iostream>


class A {
public:
	void func()& {
		std::cout << "A::func()&\n";
	}

	void func()&& {
		std::cout << "A::func()&&\n";
	}

	void func()const & {
		std::cout << "A::func()const &\n";
	}

	void func()const && {
		std::cout << "A::func()const &&\n";
	}
};


int main()
{
	A ax;
	const A ca;

	ax.func(); // A::func()&
	ca.func(); // A::func() const &
	A{}.func(); // A::func()&&
	std::move(ax).func(); // A::func()&&
	std::move(ca).func(); // A::func()const &&
}
