#include <iostream>
#include "ExcepHandlingRec.h"

using namespace std;

int main()
{
	double width;
	double length;
	
	// Create a Rectangle object
	Rectangle myRectangle;
	
	// Get the width and length
	cout << "Enter the rectangle's width: ";
	cin >> width;
	
	cout << "Enter the rectangle's length: ";
	cin >> length;
	
	// store these values in the Rectangle object.
	try
	{
		myRectangle.setWidth(width);
		myRectangle.setLength(length);
		cout << "The area of the rectangle is"
			 << myRectangle.getArea() << endl;
	}
	catch(Rectangle::NegativeWidth e)
	{
		cout << "Error: a negative value was entered. \n";
	}
	
	cout<< "End of the program";
	
	return 0;
}


