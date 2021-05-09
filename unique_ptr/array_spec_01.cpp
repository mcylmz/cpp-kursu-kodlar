#include <memory>
#include "triple.h"

int main()
{
	std::unique_ptr<Triple[]> uptr{ new Triple[5] };
	for (int i = 0; i < 5; ++i) {
		uptr[5].set(i, i, i);
	}
}
