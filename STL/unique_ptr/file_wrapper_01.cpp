#include <memory>
#include <iostream>

int main()
{
	auto f = [](FILE* f) {
		std::cout << "dosya kapatiliyor\n";
		fclose(f);
	};

	std::unique_ptr<FILE, decltype(f)> uptr(fopen("deneme.txt", "w"), f);
}
