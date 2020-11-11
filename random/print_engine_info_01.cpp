
//to be compiled by MS compiler

#include <ostream>
#include <string>
#include <iomanip>
#include <random>

template<typename RG>
void print_engine_info(std::ostream& os, const std::string name, RG&&)
{
	os << std::left << std::setw(16) << name << " = " << typeid(RG).name() << '\n';
}

#include <iostream>

int main()
{
	using namespace std;

	print_engine_info(cout, "minstd_rand0", minstd_rand0{});
	print_engine_info(cout, "minstd_rand", minstd_rand{});
	print_engine_info(cout, "mt19937", mt19937{});
	print_engine_info(cout, "mt19937-64", mt19937_64{});
	print_engine_info(cout, "ranlux24", ranlux24{});
	print_engine_info(cout, "ranlux24_base", ranlux24_base{});
	print_engine_info(cout, "ranlux48", ranlux48{});
	print_engine_info(cout, "ranlux48_base", ranlux48_base{});
}
