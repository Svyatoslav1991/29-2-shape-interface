#pragma once
#include "shape.h"

class Rectangle final : public Shape
{
public:
	Rectangle(double w, double h);
	virtual ~Rectangle();

	virtual BoundingBoxDimensions dimensions() const override;
	virtual double square() const override;
	virtual std::string type() const override;

private:
	double m_w;
	double m_h;
};