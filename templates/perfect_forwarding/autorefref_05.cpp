#include <utility>

template<typename T>
void callFoo(T&& val) 
{
	foo(std::forward<decltype(arg)>(arg));
}

// C++20
void callFoo(auto&& val) 
{
	foo(std::forward<decltype(arg)>(arg));
}
