/*
В этом задании вы вынесете иерархию классов в отдельные файлы.
Возьмите иерархию классов геометрических фигур из предыдущего домашнего задания.
Разнесите иерархию классов по отдельным файлам, продемонстрируйте работу программы таким же образом, 
как в предыдущем домашнем задании.
Обратите внимание на то, что для каждого класса должна быть создана своя 
пара — заголовочный файл + файл исходного кода.
*/

#include <iostream>
#include <string>
#include "EQtriangle.h"
#include "IStriangle.h"
#include "RTriagnle.h"
#include "Triangle.h"
#include "Parallelogram.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Rhomb.h"
#include "Square.h"

Triangle triangle(10, 20, 30, 50, 60, 70);
RTriagnle Rtriangle(10, 20, 30, 50, 60);
IStriangle Istriangle(10, 20, 50, 60);
EQtriangle Eqtriangle(30);

Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
Parallelogram parallelogram(20, 30, 30, 40);
Rectangle rectangle(10, 20);
Rhomb rhomb(30, 30, 40);
Square square(20);

int main()
{
	triangle.get_name();
	triangle.get_sides();
	triangle.get_angle();
	std::cout << "\n";

	Rtriangle.get_name();
	Rtriangle.get_sides();
	Rtriangle.get_angle();
	std::cout << "\n";

	Istriangle.get_name();
	Istriangle.get_sides();
	Istriangle.get_angle();
	std::cout << "\n";

	Eqtriangle.get_name();
	Eqtriangle.get_sides();
	Eqtriangle.get_angle();
	std::cout << "\n";

	quadrilateral.get_name();
	quadrilateral.get_sides();
	quadrilateral.get_angle();
	std::cout << "\n";

	parallelogram.get_name();
	parallelogram.get_sides();
	parallelogram.get_angle();
	std::cout << "\n";

	rectangle.get_name();
	rectangle.get_sides();
	rectangle.get_angle();
	std::cout << "\n";

	rhomb.get_name();
	rhomb.get_sides();
	rhomb.get_angle();
	std::cout << "\n";

	square.get_name();
	square.get_sides();
	square.get_angle();

	return 0;
}

