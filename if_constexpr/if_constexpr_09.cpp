#include <string>

struct Nec {
    int ival;
    double dval;
    std::string s;
};

template<size_t n>
auto& get(Nec& nec)
{
    if constexpr (n == 0)
        return nec.ival;
    else if constexpr (n == 1)
        return nec.dval;
    else
        return nec.s;
}


Nec foo()
{
    return { 12, 4.5, "salih"};
}

#include <iostream>

int main()
{
    auto [i, d, name] = foo();

    std::cout << i << " " << d << " " << name << "\n";
}
