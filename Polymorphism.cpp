// pointers to base class
#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b; }
    int val()
    { return width+height;}
};

class Rectangle: public Polygon {
  public:
    int area()
      { return width*height; }
};

class Triangle: public Polygon {
  public:
    int area()
      { return width*height/2; }
};

int main () {
	
  Polygon poly;
  Rectangle rect1;
  Triangle trgl;
  
  Polygon * ppoly0 = &poly;
  Polygon * ppoly1 = &rect1;
  Polygon * ppoly2 = &trgl;
  
  ppoly0->set_values(1,2);
  cout << poly.val() << '\n';
  
  rect1.set_values (4,5);
  poly.set_values(1,2);
  ppoly2->set_values (4,5);
  
  cout << rect1.area() << '\n';
  cout << trgl.area() << '\n';
  cout << ppoly2 << '\n'<< ppoly1<<'\n' << ppoly0 <<'\n';
  
  
  ppoly1->set_values(3,2);
  cout << rect1.area() << '\n';
  return 0;
}


