#include "..\include\rectangle.h"

Rectangle::Rectangle(double w, double h)
{
	if (w <= 0 || h <= 0)
	{
		throw std::invalid_argument("RECTANGLE: side values must be positive");
	}

	m_w = w;
	m_h = h;
}

//--------------------------------------------------

Rectangle::~Rectangle()
{

}

//--------------------------------------------------------------------------------------------------------

BoundingBoxDimensions Rectangle::dimensions() const
{
	return BoundingBoxDimensions(m_h, m_w);
}

//--------------------------------------------------------------------------------------------------------

double Rectangle::square() const
{
	return m_w*m_h;
}

//--------------------------------------------------------------------------------------------------------

std::string Rectangle::type() const
{
	return "Rectangle";
}
