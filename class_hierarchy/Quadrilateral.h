#pragma once
#include <iostream>
#include <string>

// базовый класс четырехугольника
class Quadrilateral
{
public:
	Quadrilateral();
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
	void get_name();
	void get_sides();
	void get_angle();
protected:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
	std::string name;
};
