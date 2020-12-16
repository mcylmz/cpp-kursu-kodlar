#include <thread>
#include <iostream>
#include <vector>
#include <numeric>
#include <future>
#include <random>
#include <algorithm>

int main()
{

	std::cout << std::thread::hardware_concurrency() << " esgudumlu thread destekleniyor\n";
	std::cout << "kac tamsayi: ";
	int n; std::cin >> n;

	//std::future<std::vector<int>> vec_future = std::async(std::launch::async, [n]() {
	auto vec_future = std::async(std::launch::async, [n]() {
		std::vector<int> ivec(n);
		std::generate_n(ivec.begin(), n, rand);
		std::cout << std::this_thread::get_id() << " id'li thread'den selamlar\n";
		std::cout << "dinamik dizi adresi: " << ivec.data() << "\n";
		return ivec;
		});

	auto vec = vec_future.get();
	std::cout << std::this_thread::get_id() << " id'li thread'den selamlar\n";
	std::cout << "dinamik dizi adresi: " << vec.data() << "\n";
	std::cout << "vec.size() = " << vec.size() << "\n";


	std::future<double> mean_future = std::async(std::launch::async, [&vec]() {
		std::cout << std::this_thread::get_id() << " id'li thread'den selamlar\n";
		return std::accumulate(vec.begin(), vec.end(), 0) / static_cast<double>(vec.size());
		});

	const auto mean = mean_future.get();
	std::cout << "ortalama : " << mean;
}
