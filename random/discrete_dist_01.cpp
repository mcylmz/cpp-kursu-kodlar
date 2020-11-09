#include <iostream>
#include <random>
#include <string>
#include <array>
#include <map>


int main()
{
	std::default_random_engine eng{ std::random_device{}() };

	std::array<double, 6> wts{ 10.0, 10.0, 10.0, 10.0, 10.0, 11.0 };

	std::discrete_distribution<size_t> dist{ std::begin(wts), std::end(wts) };
	std::array<std::string, 6> die_value{ "one", "two", "three", "four", "five", "six" };
	std::map<size_t, size_t> results; // Store the results of throws
	
	for (size_t go{}; go < 5000; ++go) // 5000 throws of the die
		++results[dist(eng)];

	for (const auto& pr : results)
		std::cout << "A " << die_value[pr.first] << " was thrown " << pr.second << " times\n";

}
