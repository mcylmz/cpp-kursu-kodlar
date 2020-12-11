#include <string>
#include <string_view>

int main()
{
	using namespace std;

	string_view sv;
	string str{ "necati" };

	sv = str;
	sv = str.operator std::basic_string_view<char, std::char_traits<char>>();
}

/*
	string sınıfının string_view sınıfına otomatik dönüşüm yapacak (explicit olmayan)
	operator string_view tür dönüştürme operatör fonksiyonu var.
*/
