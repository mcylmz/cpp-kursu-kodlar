#include <memory>
#include <vector>
#include <iostream>


using namespace std;

struct Member {

};

struct Owner
{
	~Owner()
	{
		std::cout << "owner destructor\n";
	}
	Member mx;
};


using Ovec = std::vector<Owner>;


int main()
{
	shared_ptr<Ovec> os(new Ovec); // use_count == 1
	os->push_back(Owner());
	os->push_back(Owner());

	cout << "[1] os.use_count() = " << os.use_count() << "\n";

	shared_ptr<Owner> o1(os, &os->at(0));
	cout << "[2] os.use_count() = " << os.use_count() << "\n";
	cout << "[3] o1.use_count() = " << o1.use_count() << "\n";
	shared_ptr<Owner> o2(os, &os->at(1));
	cout << "[4] os.use_count() = " << os.use_count() << "\n";
	cout << "[5] o1.use_count() = " << o1.use_count() << "\n";
	cout << "[6] o2.use_count() = " << o2.use_count() << "\n";
	shared_ptr<Member> o3(os, &os->at(1).mx); // use_count == 3

	cout << "[7] os.use_count() = " << os.use_count() << "\n";
	cout << "[8] o1.use_count() = " << o1.use_count() << "\n";
	cout << "[9] o2.use_count() = " << o2.use_count() << "\n";
	cout << "[10] o3.use_count() = " << o3.use_count() << "\n";

	os.reset();

	cout << "[11] os.use_count() = " << os.use_count() << "\n";
	cout << "[12] o1.use_count() = " << o1.use_count() << "\n";
	cout << "[13] o2.use_count() = " << o2.use_count() << "\n";
	cout << "[14] o3.use_count() = " << o3.use_count() << "\n";
	cout << "bir tusa basin ";
	getchar();

}
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
