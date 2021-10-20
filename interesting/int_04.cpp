#include <iostream>

template<typename Func1, typename Func2>
class callable {
	Func1* m_f1;
	Func2* m_f2;

public:
	callable(Func1* f1, Func2* f2) :m_f1(f1), m_f2(f2) { }
	operator Func1* () { return m_f1; }
	operator Func2* () { return m_f2; }
};

void foo(int i) { std::cout << "foo: " << i << std::endl; }
void bar(long il) { std::cout << "bar: " << il << std::endl; }

int main() {
	callable<void(int), void(long)> c(foo, bar);
	c(42); // calls foo
	c(42L); // calls bar
}
