#include <ostream>

class Printer
{
public:
    Printer(std::ostream& pstream) : m_stream(pstream) {}

    template <typename T>
    Printer& print(const T &t) 
    {
        m_stream << t; 
        return *this; 
    }

    template <typename T>
    Printer& println(const T&t) 
    {
        m_stream << t << '\n'; 
        return *this; 
    }
private:
    std::ostream& m_stream;
};


class CoutPrinter : public Printer
{
public:
    CoutPrinter() : Printer(std::cout) {}

    CoutPrinter& SetConsoleColor(int color)
    {
        std::cout << "console color set\n";
        return *this;
    }
};



using namespace std;

#include <iostream>

int main()
{
    CoutPrinter().print("Hello ").SetConsoleColor(12).println("Printer!"); // compile error
}
