#include <limits>
#include <cmath>
#include "Point.h"

Point::Point(const double x, const double y)
{
	this->x = x;
	this->y = y;
}

double Point::GetX() const
{
	return x;
}

double Point::GetY() const
{
	return y;
}

std::ostream& operator<<(std::ostream& os, const Point& point)
{
	os << "(x, y) = (" << point.x << ", " << point.y << ")\n";
	return os;
}

bool operator==(const Point& point1, const Point& point2)
{
	return abs(point1.GetX() - point2.GetX()) < std::numeric_limits<double>::epsilon() &&
		abs(point1.GetY() - point2.GetY()) < std::numeric_limits<double>::epsilon();
}

bool operator!=(const Point& point1, const Point& point2)
{
	return !(point1 == point2);
}

double Getdistance(const Point& point1, const Point& point2)
{
	return sqrt(pow((point1.GetX()-point2.GetX()), 2) + 
		pow((point1.GetY() - point2.GetY()), 2));
}
