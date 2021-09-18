#include <string>
#include <string_view>

class Person {
	std::string name_;
public:
	Person(std::string name) : name_{ std::move(name) } {}
	std::string_view getName() const
	{
		// bunu yapmayin
		return name_;
	}
};

Person createPerson();

int main()
{
	auto sv = createPerson().getName();
}
