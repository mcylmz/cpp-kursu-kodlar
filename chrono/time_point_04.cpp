#include <chrono>
#include <iostream>
#include <iomanip>
#include <random>

using namespace std;
using namespace chrono;


void print_time()
{
	static const char* const pmons[] = {
	"Ocak",
	"Subat",
	"Mart",
	"Nisan",
	"Mayis",
	"Haziran",
	"Temmuz",
	"Agustos",
	"Eylul",
	"Ekim",
	"Kasim",
	"Aralik"
	};

	static const char* const pdays[] = {
	"Pazar",
	"Pazartesi",
	"Sali",
	"Carsamba",
	"Persembe",
	"Cuma",
	"Cumartesi",
	};

	time_t timer = system_clock::to_time_t(system_clock::now());
	//cout << ctime(&timer) << "\n";
	auto p = localtime(&timer);
	cout.fill('0');
	cout << setw(2) << p->tm_mday << " " << pmons[p->tm_mon] << " " << p->tm_year + 1900 << " " <<
		pdays[p->tm_wday] << " " << setw(2) << p->tm_hour << ":" << setw(2) << p->tm_min << ":" << setw(2) << p->tm_sec << "\n";
}

int main()
{
	mt19937 eng(static_cast<unsigned>(duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count()));
}

