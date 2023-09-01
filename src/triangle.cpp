#include "..\include\triangle.h"
#include <cmath>
#include <iostream>
#include <algorithm>

Triangle::Triangle(double a, double b, double c)
{
	if (a <= 0 || b <= 0 || c <= 0)
	{
		throw std::invalid_argument("TRIANGLE: side values must be positive");
	}

	if (a + b <= c || a + c <= b || b + c <= a)
	{
		throw std::invalid_argument("TRIANGLE: the sum of any two sides must be greater than the third side");
	}

	m_a = a;
	m_b = b;
	m_c = c;
}

//--------------------------------------------------------------------------------------------------------

Triangle::~Triangle()
{

}

//--------------------------------------------------------------------------------------------------------

BoundingBoxDimensions Triangle::dimensions() const
{
	double r = m_a * m_b * m_c / (4. * this->square());
	return BoundingBoxDimensions(2 * r, 2 * r);
}

//--------------------------------------------------------------------------------------------------------

double Triangle::square() const
{
	double p = (m_a + m_b + m_c) / 2.;
	return sqrt(p * (p - m_a) * (p - m_b) * (p - m_c));
}

//--------------------------------------------------------------------------------------------------------

std::string Triangle::type() const
{
	return "Triangle";
}