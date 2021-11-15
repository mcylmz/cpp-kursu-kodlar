#include <utility>

template<typename T>
class Myclass {
public:
	Myclass() = default;
	Myclass(T);
};

int main()
{
	std::pair px{ 12, 5.6 };  
	Myclass m{ 10 };  //m is Myclass<int>
}
