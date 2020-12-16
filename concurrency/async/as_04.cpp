#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <algorithm>
#include <iterator>
#include <future>
#include <cctype>

using namespace std;

static map<char, size_t> histogram(const string& s)
{
	map<char, size_t> cmap;

	for (char c : s)
		++cmap[c];

	return cmap;
}

static string get_sorted(string str)
{
	sort(begin(str), end(str));
	str.erase(remove_if(str.begin(), str.end(), [](char c) {return isspace(c); }), str.end());
	return str;
}

static bool is_vowel(char c)
{
	static const char vowels[]{ "AEIOUaeiou" };
	return find(begin(vowels), end(vowels), c) != end(vowels);
}

static size_t count_vowels(const string& s)
{
	return count_if(begin(s), end(s), is_vowel);
}


int main()
{
	string sline;
	std::cout << "bir yazi girin: ";

	getline(cin, sline);

	auto hist = async(launch::async, histogram, sline);
	auto sorted_str = async(launch::async, get_sorted, sline);
	auto vowel_count = async(launch::async, count_vowels, sline);

	for (const auto& [c, count] : hist.get()) {
		cout << c << ": " << count << '\n';
	}
	cout << "siralanmis yazi : "
		<< quoted(sorted_str.get()) << '\n'
		<< "toplam sesli harf : "
		<< vowel_count.get() << '\n';
}

