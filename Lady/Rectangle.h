// Specification file for the Rectangle class.
 #ifndef RECTANGLE_H
 #define RECTANGLE_H

 // Rectangle class declaration.

 class Rectangle
 {
 	private:
 		double width;
 		double length;

	public:
		class NegativeWidth
		{
			private:
				double value;
			public:
				NegativeWidth(double val)
				{ value = val;}
				
				double getValue() const
				{return value;}
		};

	//Exception class for a negative length
	class NegativeLength
	{
		private:
			double value;
		public:
			NegativeLength(double val)
			{ value = val;}

			double getValue() const
			{ return value;}
			
	};
	
	//Default constructor
	Rectangle()
	{
		width = 0.0;
		length = 0.0;
	}
	
	// Mutator functions, defined in Rectangle.cpp
	void setWidth(double);
	void setLength(double);
	
	// Accessor functions
	double getWidth() const
	{ return width;}
	
	double getLength() const
	{ return length;}
	
	double getArea() const
	{ return width*length;}
 };

 #endif
