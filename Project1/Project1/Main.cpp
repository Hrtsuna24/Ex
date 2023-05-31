#include "Triangle.h"
#include "Point.h"
#include "Circle.h"
#include <iostream>

int main()
{
    Circle c{ Point{ 1, 2 }, 7 };
    std::cout << c << '\n';

    Triangle t{ Point{ 1, 2 }, Point{ 3, 4 }, Point{ 5, 6 } };
    std::cout << t << '\n';


	return 0;
}