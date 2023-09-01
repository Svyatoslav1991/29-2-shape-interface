#pragma once
#include "shape.h"

class Circle final : public Shape
{
public:
	Circle(double r);
	virtual ~Circle();

	virtual BoundingBoxDimensions dimensions() const override;
	virtual double square() const override;
	virtual std::string type() const override;

private:
	double m_r;
};