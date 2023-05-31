#pragma once
#include <ostream>
class Point
{
	int m_XY[2]{};
public:
	Point(int = 0, int = 0);

	friend std::ostream& operator<<(std::ostream& out, const Point & p);
};

