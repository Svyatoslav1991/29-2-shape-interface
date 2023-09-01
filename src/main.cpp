#include <iostream>
#include "functions.h"
#include "circle.h"
#include "triangle.h"
#include "rectangle.h"
#include <memory>


int main() {
	std::cout << "\tTASK 29.2 SHAPE INTERFACE\n\n";

	try
	{
		std::unique_ptr<Shape> circle = std::make_unique<Circle>(5);
		std::unique_ptr<Shape> triangle = std::make_unique<Triangle>(3, 4, 5);
		std::unique_ptr<Shape> rectangle = std::make_unique<Rectangle>(3, 4);

		printParams(circle.get());
		printParams(triangle.get());
		printParams(rectangle.get());
	}
	catch (const std::invalid_argument& e)
	{
		std::cerr << "Error: " << e.what() << "\n";
	}
	catch (...)
	{
		std::cerr << "Something went wrong...\n";
	}



	return 0;
}