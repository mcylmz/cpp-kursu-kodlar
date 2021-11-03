#include <optional>
#include <atomic>
#include <tuple>
#include <mutex>
#include <thread>

using namespace std;

mutex mt;

int main()
{
	optional op{ 23 };
	atomic ato{ 56 };
	tuple tx{ 2, 5.6, "ali" };
	lock_guard guard{ mt };
}
