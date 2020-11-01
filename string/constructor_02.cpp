#include <string>
#include <iostream>

void print(const std::string &str)
{
	std::cout << "[" << str << "] [" << str.size() << "/" << str.capacity() << "]\n";
}

int main()
{
	using namespace std;

	string s{ "life is very short and there's no thime for fussing and fighting my friend" };
	print(s);
	string s1{ s, 23}; //sub-string ctor
	print(s1);
	string s3{s, 8, 10}; //sub-string ctor
	print(s3);
}

