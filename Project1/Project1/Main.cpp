#include "Triangle.h"
#include "Point.h"
#include "Circle.h"
#include "Shape.h"
#include "getLargestRadius.h"

#include <vector>
#include <iostream>

int main()
{
	std::vector<Shape*> v{
	  new Circle{Point{ 1, 2 }, 7},
	  new Triangle{Point{ 1, 2 }, Point{ 3, 4 }, Point{ 5, 6 }},
	  new Circle{Point{ 7, 8 }, 3}
	};

	// print each shape in vector v on its own line here
	PrinVec(v);

	std::cout << "The largest radius is: " << getLargestRadius(v) << '\n'; // write this function

	// delete each element in the vector here

	return 0;
}