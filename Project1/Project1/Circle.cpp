#include "Circle.h"

std::ostream& Circle::print(std::ostream& out) const
{
    // TODO: insert return statement here
    out << "Circle("
        << m_center <<", "
        << m_radius
        << ')';
    return out;
}

Circle::Circle(const Point&, int)
{
}
