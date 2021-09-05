#include <functional>
#include <string>

int main()
{
	using namespace std;
	//reference_wrapper r1 = "ali"s; //gecersiz
	reference_wrapper<const string> r2 = "ali"s; //gecersiz
	//reference_wrapper R value ifadesine bağlanamaz
}
