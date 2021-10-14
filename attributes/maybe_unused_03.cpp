//bu işlev çağrılmadığı için derleyici uyarı verebilir
static void func() 
{
	//...
} 

[[maybe_unused]] static void foo() 
{ 

} // Bu işlev çağrılmaz ise derleyici uyarı vermeyecek


int main()
{
	int x = 42; //bu değişken kullanılmadığı için derleyici uyarı verebilir
	[[maybe_unused]] int y = 42; //bu değişken kullanılmadığı için derleyici uyarı vermeyecek
}
