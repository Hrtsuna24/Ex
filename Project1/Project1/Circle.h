#pragma once
#include "Shape.h"
#include "Point.h"
class Circle :
    public Shape
{
    Point m_center{};
    int m_radius{};
public:
    virtual std::ostream& print(std::ostream& out) const override;

    Circle(const Point&, int = 0);

    const int& getRadius() const { return m_radius; };
};

