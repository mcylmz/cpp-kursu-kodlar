#include <numbers>
#include <iostream>

class Radius
{
public:
    explicit Radius(double value) : value_(value) {}
    double get() const { return value_; }
private:
    double value_;
};

class Diameter
{
public:
    explicit Diameter(double value) : value_(value) {}
    double get() const { return value_; }
private:
    double value_;
};


class Circle
{
public:
    explicit Circle(Radius radius) : radius_(radius.get()) {}
    explicit Circle(Diameter diameter) : radius_(diameter.get() / 2.) {} 
    void setRadius(double radius) { radius_ = radius; };
    double getCircumference() const { return 2 * std::numbers::pi * radius_; }
    double getArea() const { return std::numbers::pi * radius_ * radius_; }
private:
    double radius_;
};

int main()
{
    Circle c1(Radius{ 2.3 });
    Circle c2(Diameter{ 4.6 });

    std::cout << c1.getArea() << "\n";
    std::cout << c1.getCircumference() << "\n";

    std::cout << c2.getArea() << "\n";
    std::cout << c2.getCircumference() << "\n";
}
