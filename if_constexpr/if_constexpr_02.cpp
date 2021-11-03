#include <type_traits>

template <typename T>
void func(T tx)
{
	if constexpr (std::is_integral_v<T>) {
		if (tx != 0) {
			func(tx--);
			//...
		}
	}
	else {
		//undeclared_f(); //syntax error
		//undeclared(f);
		//static_assert(false, "not integral type"); //syntax error
	}
}

int main()
{
	func<double>(2);
}
