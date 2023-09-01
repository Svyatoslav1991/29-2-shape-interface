#pragma once
#include "shape.h"

class Triangle final : public Shape
{
public:
	Triangle(double a, double b, double c);
	virtual ~Triangle();

	virtual BoundingBoxDimensions dimensions() const override;
	virtual double square() const override;
	virtual std::string type() const override;

private:
	double m_a;
	double m_b;
	double m_c;
};