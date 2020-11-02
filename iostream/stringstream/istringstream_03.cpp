int main()
{
	string str;
	cout << "bir yazi giriniz: ";
	getline(cin, str);

	istringstream iss{ str };

	string word;

	int cnt{};

	vector<string> svec;
	while (iss >> word) {
		cout << setw(2) << ++cnt << " " << word << "\n";
		svec.push_back(word);
	}

	sort(begin(svec), end(svec));
	std::copy(svec.begin(), svec.end(), ostream_iterator<string>{cout, " "});
}
