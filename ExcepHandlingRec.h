#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	private:
		double width;
		double length;
	public:
		// Exception class
		class NegativeSize
		{};
		
		// Default Constructor
		Rectangel()
		{
			width = 0;
			length = 0;
		}
		
		// Mutator functions, defined in Rectangle.cpp
		void setWidth(double);
		void setLength(double);
		
		// Accessor functions
		double getWidth() const
		{
			return width;
		}
		
		double getLength() const
		{
			return length;
		}
		
		double getArea() const
		{
			return width*length;
		}

};

#endif

