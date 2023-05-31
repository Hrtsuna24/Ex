#pragma once
#include<ostream>
class Shape
{

public:
	friend std::ostream& operator<<(std::ostream&, const Shape&);
	virtual std::ostream& print(std::ostream& out) const = 0;
	virtual ~Shape() = default;
};

