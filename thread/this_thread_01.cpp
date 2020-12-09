#include <iostream>
#include <thread>

void tfunc(int ms)
{
	using namespace std::chrono;

	std::cout << "thread id = " << std::this_thread::get_id() << "\n";
	std::cout << ms << "saniye bloke edilecek: " << "\n";
	std::this_thread::sleep_for(milliseconds{ ms });
	std::cout << "tfunc sonlaniyor bir tusa basin";
}


int main()
{
	std::thread th{ tfunc, 500 };
	th.join();
	(void)getchar();
	std::cout << "program sonlaniyor\n";
}
