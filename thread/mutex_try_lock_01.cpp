// mutex::try_lock ornek kod

#include <iostream>
#include <thread>
#include <mutex>

int counter{};		// non-atomic counter
std::mutex counter_mtx;				// locks access to counter

void try_increase()
{
	for (int i = 0; i < 100'000; ++i) {
		if (counter_mtx.try_lock()) {   // only increase if currently not locked:
			++counter;
			counter_mtx.unlock();
		}
	}
}

int main()
{
	std::thread ar_t[10];

	for (int i = 0; i < 10; ++i)
		ar_t[i] = std::thread(try_increase);

	for (auto& t : ar_t)
		t.join();

	std::cout << counter << " kez arttirma islemi yapilabildi.\n";
}
