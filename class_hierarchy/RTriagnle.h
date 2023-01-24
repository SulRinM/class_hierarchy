#pragma once
#include "Triangle.h"
#include "RTriagnle.h"

// Прямоугольный треугольник
class RTriagnle : public Triangle
{
public:
	RTriagnle(int a, int b, int c, int A, int B);
};