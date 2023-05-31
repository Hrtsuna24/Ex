#include "Point.h"

Point::Point(int x, int y)
{
	m_XY[0] = x, m_XY[1] = y;
}

std::ostream& operator<<(std::ostream& out, const Point & p)
{
	// TODO: insert return statement here
	size_t i{};
	out << "Point("
		<< p.m_XY[i++] << ", "
		<< p.m_XY[i]
		<< ')';
	return out;
}
