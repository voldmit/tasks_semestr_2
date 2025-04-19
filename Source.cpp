#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

/**
 * @brief считывает значение с клавиатуры с проверкой ввода
 * @param message - выводимое сообщение 
 * @return считанное значение
 */
double GetValue(const string message);
/**
 * @brief считывает последовательно координаты х и у точки
 * @param message выводимое сообщение
 * @return точку с координатами х и у
 */
Point GetPoint(const string message);
/**
 * @brief считывает последовательно три точки
 * @param message выводимое сообщение
 * @return прямоугольник, заданный тремя точками
 */
Rectangle GetRectangle(const string message);

/**
 * @brief Точка входа в программу
 * @return 0 в случае успеха
 */
int main()
{
	Rectangle rectangle = GetRectangle("Enter Rectangle: ");
	rectangle.Show();
	cout << "Area is " << rectangle.GetArea() << endl;
	cout << "Radius is " << rectangle.GetRadius();
	return 0;
}

double GetValue(const string message)
{
	cout << message;
	double value = 0;
	cin >> value;
	if (cin.fail())
	{
		throw("Error value");
	}

	return value;
}

Point GetPoint(const string message)
{
	double x = GetValue("Enter x: ");
	double y = GetValue("Enter y: ");

	return Point(x,y);
}

Rectangle GetRectangle(const string message)
{
	Point point1 = GetPoint("Enter First point: ");
	Point point2 = GetPoint("Enter Second point: ");
	Point point3 = GetPoint("Enter Third point: ");
	return Rectangle(point1, point2, point3);
}
