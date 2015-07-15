/* The Circle class Implementation (Circle.cpp) */
#include "Circle.h" // user-defined header in the same directory
 /* A test driver for the Circle class (TestCircle.cpp) */
#include <iostream>

using namespace std;
 
// Constructor
// default values shall only be specified in the declaration,
// cannot be repeated in definition
Circle::Circle(double r, string c) {
   radius = r;
   color = c;
}
 
// Public getter for private data member radius
double Circle::getRadius() const {
   return radius;
}
 
// Public setter for private data member radius
void Circle::setRadius(double r) {
   radius = r;
}
 
// Public getter for private data member color
string Circle::getColor() const {
   return color;
}
 
// Public setter for private data member color
void Circle::setColor(string c) {
   color = c;
}
 
// A public member function
double Circle::getArea() const {
   return radius*radius*3.14159265;
}

int main() {
   // Construct an instance of Circle c1
   Circle c1(1.2, "red");
   cout << "Radius=" << c1.getRadius() << " Area=" << c1.getArea()
        << " Color=" << c1.getColor() << endl;
 
   c1.setRadius(2.1);   // Change radius and color of c1
   c1.setColor("blue");
   cout << "Radius=" << c1.getRadius() << " Area=" << c1.getArea()
        << " Color=" << c1.getColor() << endl;
 
   // Construct another instance using the default constructor
   Circle c2;
   cout << "Radius=" << c2.getRadius() << " Area=" << c2.getArea()
        << " Color=" << c2.getColor()  << endl;
   return 0;
}
