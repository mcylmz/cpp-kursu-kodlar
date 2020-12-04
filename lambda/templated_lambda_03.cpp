int main()
{
	auto f1 = [](int x, int y) {return x + y; };
	auto f2 = [](auto x, auto y) {return x + y; };
	auto f3 = [](auto x, decltype(x)y) {return x + y; };
	auto f4 = []<typename T>(T x, T y) { return x + y; };
}
