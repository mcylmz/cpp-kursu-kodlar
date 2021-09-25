#include <iostream>

class Nec {};

void f(Nec&)
{
	std::cout << "Nec&\n";
}

void f(const Nec&)
{
	std::cout << "const Nec&\n";
}

void f(Nec&&)
{
	std::cout << "Nec&&\n";
}

void f(const Nec&&)
{
	std::cout << "const Nec&&\n";
}

Nec& foo_ret_lref(Nec& r)
{
	return r;
}

const Nec& foo_ret_const_lref(const Nec& r)
{
	return r;
}

Nec&& foo_ret_rref(Nec&& r)
{
	return std::move(r);
}

const Nec&& foo_ret_const_rref(const Nec&& r)
{
	return std::move(r);
}

Nec foo_ret_value()
{
	Nec nec;

	return nec;
}

int main()
{
	Nec nx;
	Nec cnec;

	f(foo_ret_lref(nx));
	f(foo_ret_const_lref(nx));
	f(foo_ret_rref(Nec{}));
	f(foo_ret_const_rref(std::move(cnec)));
	f(foo_ret_value());
}
