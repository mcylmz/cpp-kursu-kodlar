template <typename T>
void foo(const T* p);

int main()
{
	const char* pnames[] = { "recep", "tayyip" ,"bilal", "emine", "sumeyye" };
	foo(pnames); //foo<char>
}
