#pragma once
#include <limits>
#include <cmath>
#include "Point.h"
/**
 * @brief класс ѕр€моугольник
 */
class Rectangle
{
private:
	/**
	 * @brief перва€ точка
	 */
	Point point1;
	/**
	 * @brief втора€ точка
	 */
	Point point2;
	/**
	 * @brief треть€ точка
	 */
	Point point3;
	/**
	 * @brief четверта€ точка
	 */
	Point point4;
	/**
	 * @brief перва€ сторона
	 */
	double side1;
	/**
	 * @brief втора€ сторона
	 */
	double side2;
public:
	/**
	 * @brief конструктор, воздающий объект по трем точкам
	 * @param point1 перва€ точка
	 * @param point2 втора€ точка
	 * @param point3 треть€ точка
	 */
	Rectangle(const Point& point1, const Point& point2, const Point& point3);
	/**
	 * @brief расчет площади пр€моугольника
	 * @return рассчитанное значение площади
	 */
	double GetArea()const;
	/**
	 * @brief расчет радиуса описанной окружности
	 * @return радиус описанной окружности
	 */
	double GetRadius()const;
	/**
	 * @brief ¬ывод данных о пр€моугольнике в консоль
	 */
	void Show()const;
};

