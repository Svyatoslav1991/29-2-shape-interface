#include "..\include\functions.h"

void printParams(Shape* shape) noexcept
{
	std::cout << "\nType:\t" << shape->type() << "\n";
	std::cout << "Square:\t" << shape->square() << "\n";
	std::cout << "Width:\t" << shape->dimensions().m_width << "\n";
	std::cout << "Height:\t" << shape->dimensions().m_height << "\n";
}
