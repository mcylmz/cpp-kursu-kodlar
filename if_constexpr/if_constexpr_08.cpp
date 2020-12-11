#include <string>

struct Nec {
    int ival;
    double dval;
    std::string s;
};

template<size_t n>
auto& get(Nec& nec);

template <> auto& get<0>(Nec& s) { return s.ival; }
template <> auto& get<1>(Nec& s) { return s.dval; }
template <> auto& get<2>(Nec& s) { return s.s; }

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
