#pragma once
#include "Shape.h"
#include "Point.h"
class Triangle :
    public Shape
{
    Point m_Arr[3];
public:
    virtual std::ostream& print(std::ostream& out) const override;

    Triangle(const Point&, const Point&, const Point&);
};

