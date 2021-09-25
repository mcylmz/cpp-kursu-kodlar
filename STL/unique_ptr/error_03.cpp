#include "triple.h"
#include <memory>

int main()
{
	auto upx = std::make_unique<Triple>(1, 2, 3);
	std::cout << "upx = " << (upx ? "dolu" : "bos") << "\n";
	auto pt = upx.release();
	std::cout << "upx = " << (upx ? "dolu" : "bos") << "\n";
	std::cout << *pt << "\n";
	std::cout << std::boolalpha << (upx == nullptr) << "\n"; 
	std::cout << *upx << "\n"; //ub
}
