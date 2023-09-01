#include "..\include\circle.h"
#define _USE_MATH_DEFINES
#include <math.h>

Circle::Circle(double r)
{
	if (r <= 0)
	{
		throw std::invalid_argument("CIRCLE: radius must be positive");
	}

	m_r = r;
}

//------------------------------

Circle::~Circle()
{

}

//--------------------------------------------------------------------------------------------------------

BoundingBoxDimensions Circle::dimensions() const
{
	return BoundingBoxDimensions(m_r * 2, m_r * 2);
}

//--------------------------------------------------------------------------------------------------------

double Circle::square() const
{
	return M_PI * pow(m_r, 2);
}

//--------------------------------------------------------------------------------------------------------

std::string Circle::type() const
{
	return "Circle";
}
