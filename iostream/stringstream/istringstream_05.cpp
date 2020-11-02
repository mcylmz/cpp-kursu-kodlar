#include <tuple>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

tuple<string, string, string>
get_names(const std::string& str)
{
	string name, middle_name, surname;
	istringstream(str) >> name >> middle_name >> surname;
	if (surname.empty())
		return { name, "", middle_name };
	
	return { name, middle_name, surname };
}

int main()
{
	auto [name, middle_name, surname] = get_names("ahmet ibrahim aksoy");
	//auto [name, middle_name, surname] = get_names("ahmet aksoy");

	cout << name << " " << middle_name << " " << surname << "\n";
}
