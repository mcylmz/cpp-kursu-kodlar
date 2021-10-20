#include <numbers>

class Circle
{
public:
    explicit Circle(double radius) : radius_(radius) {}
    explicit Circle(double diameter) : radius_(diameter / 2.) {} //gecersiz
    void setRadius(double radius) { radius_ = radius; };
    double getCircumference() const { return 2 * std::numbers::pi * radius_; }
    double getArea() const { return std::numbers::pi * radius_ * radius_; }
private:
    double radius_;
};
