template <typename T>
void foo(const T* p);

int main()
{
    const char* pnames[] = { "ahmet", "nihal", "salih", "turgut", "ayse" };
    foo(pnames); //foo<char>
}
