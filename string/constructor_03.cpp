#include <string>
#include <iostream>

void print(const std::string &str)
{
	std::cout << "[" << str << "] [" << str.size() << "/" << str.capacity() << "]\n";
}

int main()
{
	using namespace std;

	//string s1('a'); //gecersiz char parametreli ctor yok
	string s2(65, 'A'); //fill ctor
	print(s2);
	string s3{ 65, 'A' }; //init_list ctor
	//string s3 = { 65, 'A' }; //init_list ctor
	print(s3);
}

