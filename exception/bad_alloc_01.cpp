#include <iostream>
#include <vector>
#include <exception>

class Buffer {
	constexpr static size_t size{ 1'024 };
	char mbuffer[1024];
};

int main()
{
	std::vector<Buffer*> bvec;

	try {
		for (;;)
			bvec.push_back(new Buffer);
	}
	catch (const std::bad_alloc& ex) {
		std::cout << "exception caught : " << ex.what() << "\n";
		std::cout << "size = " << bvec.size() << "\n";
	}
}
