#include <variant>
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	variant<int, string, double> vx{ "mustafa"};

	cout << get<1>(vx) << "\n";
	visit([](auto& val) {
		val = std::remove_reference_t<decltype(val)>{};
		}, vx);
	cout << get<1>(vx).size() << "\n";
}
