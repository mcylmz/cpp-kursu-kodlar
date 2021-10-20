template<typename T>
void func(const T& a, const T& b);

int main() 
{
	int a[2]{};
	int b[3]{};
	f(+a, +b); 
}
