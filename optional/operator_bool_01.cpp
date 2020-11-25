#include <optional>
#include <iostream>
#include <string>

std::optional<std::string> getMiddleName(const std::string& rname);

int main()
{
	std::string str;
	///code

	if (auto ostr = getMiddleName(str); ostr)
		std::cout << "ostr " << *ostr << '\n';
	else
		std::cout << "ostr bos durumda\n";
}
