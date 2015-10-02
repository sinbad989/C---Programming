#include <iostream>

using namespace std;


// Based Class
class Polygon
{
	protected:
		int length = 0;
		int width = 0;
	public:
		void setValues(int a,int b)
		{
			width = a;
			length = b;
		}
		
		virtual int area()=0;
};


// Class inheritance
class Rectangle: public Polygon
{
	public:
		int area()
		{
		return width*length;
		}
};

class Triangle: public Polygon
{
	public:
		int area()
		{
		return width*length/2;
		}
};
		
		
 // Implementation
int main()
{
Rectangle rect;
Triangle trgl;
//olygon poly;

// Pointers to Base class
Polygon *poly1 = &rect;
Polygon *poly2 = &trgl;
//Polygon *poly3 = &poly;

poly1 ->setValues(4,5);
poly2 ->setValues(4,5);
// ->setValues(4,5);

cout << poly1->area() << '\n';
cout << poly2->area() << '\n'; // accessing the function of the derived class using a reference to the base class
//cout << poly3->area();

return 0;
}
