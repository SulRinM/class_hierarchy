#pragma once

#include <iostream>
#include <string>


// базовый класс треугольника
class Triangle
{
public:
	Triangle(int a, int b, int c, int A, int B, int C);
	Triangle();
	void get_name();
	void get_sides();
	void get_angle();
protected:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
	std::string name;
};