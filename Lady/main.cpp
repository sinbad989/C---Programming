#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
	double width;
	double length;

	//Create a rectangle object
	Rectangle myRectangle;
	
	// geth the width and length
	cout << "Enter the rectangle's width:";
	cin >> width;
	
	cout << "Enter the rectangle's length:";
	cin >> length;
	
	//store these values in the rectangle objects;
	try
	{
		myRectangle.setWidth(width);
		myRectangle.setLength(length);
		
		cout << "The area of the rectangle is"
			 << myRectangle.getArea() << endl;
	}
	catch(Rectangle::NegativeWidth e)
	{
		cout << "Error:" << e.getValue()
			 << " is an invalid value for the"
			 << "rectangle's width. \n";
	}
	catch(Rectangle::NegativeLength e)
	{
		cout << "Error:" << e.getValue()
			 << " is an invalid value for the"
			 << "rectangle's width. \n";

	}
	
return 0;
}
