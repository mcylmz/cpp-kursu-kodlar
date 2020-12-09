int main()
{
	static_assert(sizeof(int) == 4, "gecersiz sizeof");
	static_assert(sizeof(double) == 8); //is also valid since C++17
	//...
}
