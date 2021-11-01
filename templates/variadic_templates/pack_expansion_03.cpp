struct X { X(int); };
struct Y { Y(int); };
struct Z { Z(int); };

template <typename ...Types>
class A : public Types ...{
public:
	A() : Types(0)... {

	}
};


int main()
{
	A<X, Y, Z> ax;
}
