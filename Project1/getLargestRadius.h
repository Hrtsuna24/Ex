#pragma once
#include <vector>
#include "Shape.h"
#include <iostream>

int getLargestRadius(std::vector<Shape*>& shapes)
{
	/*
	
	Circle(Point(1, 2), radius 7)
Triangle(Point(1, 2), Point(3, 4), Point(5, 6))
Circle(Point(7, 8), radius 3)
The largest radius is: 7

		*/
	int maxref = INT_MIN;
	for ( Shape* shape : shapes)
	{
		int tmp{};
	
		
		if (dynamic_cast<Circle*>(shape))
		{
			tmp = dynamic_cast<Circle*>(shape)->getRadius();
		}
		if (maxref < tmp)
		{
			maxref = tmp;
		}
	}

	return maxref;
}

void PrinVec(std::vector<Shape*>& shapes)
{

	for (const Shape* shape : shapes)
	{
		std::cout << *shape << '\n';
	}
}