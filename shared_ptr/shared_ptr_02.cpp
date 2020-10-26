
#include <memory>
#include "person.h"

using namespace std;

void func(shared_ptr<Person> sptr)
{
	std::cout << "func cagrildi\n";
	cout << "sptr.use_count() = " << sptr.use_count() << "\n";
	std::cout << *sptr << "\n";

}

int main()
{
	auto sp1 = make_shared<Person>("Necati", "Ergin");
	cout << "sp1.use_count() = " << sp1.use_count() << "\n";
	func(sp1);
	cout << sp1.use_count() << "\n";
	cout << "bir tusa basin ";
	getchar();
}
