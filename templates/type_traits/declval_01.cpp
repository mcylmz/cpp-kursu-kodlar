#include <type_traits>

template <typename T>
std::add_rvalue_reference_t<T> Declval()noexcept;

struct NoDefault {
	NoDefault(int);
	int foo();
};

int main()
{
	//decltype(NoDefault>().foo() x;
	decltype(std::declval<NoDefault>().foo()) x{};
}
