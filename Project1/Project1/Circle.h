#pragma once
#include "Shape.h"
#include "Point.h"
class Circle :
    public Shape
{

public:
    virtual std::ostream& print(std::ostream& out) const override;

    Circle(const Point&, int = 0);
};

