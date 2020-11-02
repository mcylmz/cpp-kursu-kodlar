#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
	if (argc != 2) {
		cerr << "kullanim: <yaz> <dosya ismi>\n";
		return 1;
	}

	ifstream ifs{ argv[1] };
	if (!ifs) {
		cerr << argv[1] << " dosyasi acilamadi\n";
		return 2;
	}
	cout << ifs.rdbuf();
}
