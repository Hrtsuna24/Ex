#include "Triangle.h"

std::ostream& Triangle::print(std::ostream& out) const
{
	// TODO: insert return statement here
	size_t i{};
	out << "Triangle("
		<< m_Arr[i++] << ", "
		<< m_Arr[i++] << ", "
		<< m_Arr[i]
		<< ')';
	return out;
}

Triangle::Triangle(const Point& x, const Point& y, const Point& z)
{
	size_t i{};
	m_Arr[i++] = x;
	m_Arr[i++] = y;
	m_Arr[i] = z;
}
