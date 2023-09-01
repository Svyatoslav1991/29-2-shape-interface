#pragma once

#include "boundingboxdimensions.h"

class Shape
{
public:
	virtual ~Shape() = 0;
	virtual BoundingBoxDimensions dimensions() const = 0;
	virtual double square() const = 0;
	virtual std::string type() const = 0;
};