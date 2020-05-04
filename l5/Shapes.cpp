#include <iostream>
using std::cout;

#include "Shapes.h"

namespace NS=NickSchantz;

// Shape
// 2D
// Circle
NS::Circle::Circle(double radius):
    radius(radius)
{}

double
NS::Circle::getArea() const
{
    return radius * radius * 3.14;
}

void
NS::Circle::display() const
{
    cout << "Circle with radius " << radius
        << " has area " << getArea() << "\n";
}

// Square
NS::Square::Square(double lengthOfSide):
    lengthOfSide(lengthOfSide)
{}

double
NS::Square::getArea() const
{
    return lengthOfSide * lengthOfSide;
}

void
NS::Square::display() const
{
    cout << "Square with length of side " << lengthOfSide
        << " has area " << getArea() << "\n";
}

// 3D
// Sphere
NS::Sphere::Sphere(double radius):
    radius(radius)
{}

double
NS::Sphere::getVolume() const
{
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}

double
NS::Sphere::getSurfaceArea() const
{
    return 4.0 * 3.14 * radius * radius;
}

void
NS::Sphere::display() const
{
    cout << "Sphere with raidus " << radius
        << " has surface area " << getSurfaceArea()
        << " and volume " << getVolume() << "\n";
}

// Cube
NS::Cube::Cube(double lengthOfSide):
    lengthOfSide(lengthOfSide)
{}

double
NS::Cube::getVolume() const
{
    return lengthOfSide * lengthOfSide * lengthOfSide;
}

double
NS::Cube::getSurfaceArea() const
{
    return 6.0 * lengthOfSide * lengthOfSide;
}

void
NS::Cube::display() const
{
    cout << "Cube with side of lenght " << lengthOfSide
        << " has surface area " << getSurfaceArea()
        << " and volume " << getVolume() << "\n";
}
