#pragma once
#include "Shape.h"
#include "Point.h"
class Triangle :
    public Shape
{

public:
    virtual std::ostream& print(std::ostream& out) const override;

    Triangle(const Point&, const Point&, const Point&);
};

