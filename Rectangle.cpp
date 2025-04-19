#include "Rectangle.h"

Rectangle::Rectangle(const Point& point1, const Point& point2, const Point& point3)
{
	this->point1 = point1;
	this->point2 = point2;
	this->point3 = point3;
	side1 = Getdistance(point1, point2);
	side2 = Getdistance(point2, point3);
	double side3 = Getdistance(point1, point3);

	if (point1 == point2 || point1 == point3 || point2 == point3 ||
		pow(side3, 2) - pow(side1, 2) - pow(side2, 2) <
		std::numeric_limits<double>::epsilon())

	{
		throw("can't be rectangle");
	}
	point4 = Point(point3.GetX() - (point1.GetX() - point2.GetX()),
		point1.GetY() - (point2.GetY() - point3.GetY()));

}

double Rectangle::GetArea() const
{
	return side1 * side2;
}

double Rectangle::GetRadius() const
{
	return Getdistance(point1, point3) / 2;
}

void Rectangle::Show() const
{
	std::cout << "Point 1: " << point1;
	std::cout << "Point 2: " << point2;
	std::cout << "Point 3: " << point3;
	std::cout << "Point 4: " << point4;
}
