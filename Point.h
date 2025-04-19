#pragma once
#include <iostream>
/**
 * @brief класс Точка
 */
class Point
{
private:
	/**
	 * @brief координата х
	 */
	double x;
	/**
	 * @brief координата у
	 */
	double y;
public:
	/**
	 * @brief конструктор класса
	 * @param x координата x по умолчанию 0
	 * @param y координата y по умолчанию 0
	 */
	Point(const double x = 0, const double y = 0);
	/**
	 * @brief получение координаты x
	 * @return координату x
	 */
	double GetX()const;
	/**
	 * @brief получение координаты y
	 * @return координату y
	 */
	double GetY()const;
	/**
	 * @brief переопределение оператора сдвига потока данных слево
	 * @param os поток вывода
	 * @param point объект класса Point
	 * @return поток вывода
	 */
	friend std::ostream& operator<<(std::ostream& os, const Point& point);

};
/**
 * @brief переопределение опратока сравнения на равенство
 * @param point1 первая точка
 * @param point2 вторая точка
 * @return резульст сравнения на равенство
 */
bool operator==(const Point& point1, const Point& point2);
/**
 * @brief переопределение опратока сравнения на неравенство
 * @param point1 первая точка
 * @param point2 вторая точка
 * @return резульст сравнения на неравенство
 */
bool operator!=(const Point& point1, const Point& point2);

/** 
* @brief рассчитвывает растояние между двумя токами
* @param point1  первая точка
* @param point2  вторая точка
* @return расстояние между точками
*/
double Getdistance(const Point& point1, const Point& point2);