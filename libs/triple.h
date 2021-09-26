#pragma once

#include <iostream>


class Triple {

public:

	Triple(int x, int y, int z) : mx{ x }, my{ y }, mz{ z } {
		std::cout << *this << " degerinde " << this << " adresinde Triple nesnesi hayata geldi\n";
	}

	Triple() {
		std::cout << *this << " degerinde Triple nesnesi " << this << " adresinde hayata geldi\n";
	}

	~Triple() {
		std::cout << *this << " degerindeki " << this << " adresindeki Triple nesnesinin hayati sona erdi\n";
	}

	void set(int a, int b, int c)
	{
		mx = a;
		my = b;
		mz = c;
	}

	friend std::ostream& operator<<(std::ostream& os, const Triple& t)
	{
		return os << "(" << t.mx << ", " << t.my << ", " << t.mz << ")";
	}
private:
	int mx{}, my{}, mz{};
};
