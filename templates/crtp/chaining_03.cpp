#include <ostream>

template <typename ConcretePrinter>
class Printer
{
public:
    Printer(std::ostream& pstream) : m_stream(pstream) {}

    template <typename T>
    ConcretePrinter& print(const T& t)
    {
        m_stream << t;
        return static_cast<ConcretePrinter&>(*this);
    }

    template <typename T>
    ConcretePrinter& println(T&& t)
    {
        m_stream << t << '\n';
        return static_cast<ConcretePrinter&>(*this);
    }
private:
    std::ostream& m_stream;
};

#include <iostream>



class CoutPrinter : public Printer<CoutPrinter>
{
public:
    CoutPrinter() : Printer(std::cout) {}

    CoutPrinter& SetConsoleColor(int c)
    {
       return *this;
    }
};

int main()
{
    CoutPrinter().print("Hello ").SetConsoleColor(15).println("Printer!");
}
