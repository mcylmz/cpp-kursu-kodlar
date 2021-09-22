#include <iostream>

class Nec {};

void f(Nec&)
{
	std::cout << "f(Nec &)\n";
}

void f(const Nec&)
{
	std::cout << "f(const Nec &)\n";
}

void f(Nec &&)
{
	std::cout << "f(Nec &&)\n";
}

void f(const Nec&&)
{
	std::cout << "f(const Nec &&)\n";
}

//f'i cagiracak fonksiyonlar

void call_f(Nec& r)
{
	f(r);
}

void call_f(const Nec&r)
{
	f(r);
}

void call_f(Nec&& r)
{
	f(std::move(r));
}

void call_f(const Nec&& r)
{
	f(std::move(r));
}

int main()
{
	Nec nec;
	const Nec c_nec;

	f(nec); call_f(nec);
	std::cout << "--------------------\n";
	f(c_nec); call_f(c_nec);
	std::cout << "--------------------\n";
	f(Nec{}); call_f(Nec{});
	std::cout << "--------------------\n";
	f(std::move(nec)); call_f(std::move(nec));
	std::cout << "--------------------\n";
	f(std::move(c_nec)); call_f(std::move(c_nec));
}
