#include <iostream>
#include <vector>
#include <cmath>
#include <future>
#include <stdexcept>
#include <algorithm>
#include <numeric>

double square_root(double x)
{
	if (x < 0.)
		throw std::domain_error("negatif sayi ustunde karekok islemi!!!");

	return std::sqrt(x);
}

int main()
{
	std::vector<double> dvec(10);

	std::iota(dvec.begin(), dvec.end(), 20);

	dvec.back() = -1;

	std::vector<std::future<double>> ftr_vec;

	for (auto dval : dvec) {
		ftr_vec.push_back(std::async(square_root, dval));
	}

	for (auto& x : ftr_vec) {
		try {
			std::cout << x.get() << "\n";
		}
		catch (const std::domain_error& d_ex) {
			std::cout << "hata yakalandi : " << d_ex.what() << "\n";
		}
	}
}
