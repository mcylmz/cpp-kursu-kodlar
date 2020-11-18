#include <regex>
#include <iostream>
#include <string>


using namespace std;

int main()
{
	string str{ "iste profesyonel butun programcilar tum yazilimsal problemleri cozebilmeli" };
	regex rgx{ "\\b(pro)([^ ]*)" };

	auto s = regex_replace(str, rgx, "[$2-$1]");
	//auto s = regex_replace(str, rgx, "[$2-$1]", regex_constants::format_first_only);

	cout << "[" << s << "]\n";
}
