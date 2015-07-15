#include "Complex.h"

#include <iostream>
using namespace std;

/**@class Complex
* @brief ACTIVITY 2.1 Declaration of Complex Class.
* <PRE>The participants will be give following Activity.
* 1. Write a class Complex, which will enforce encapsulation.
* 2. class Complex should have two private member variable to store real and imaginary variables.
* 3. Declare two constructors. One without any parameters. Second takes two parameters.
* 4. Declare Destructor.
* 5. Declare a function to print the content of the Complex class.
* 6. Write getters and setters for two varialbes.
* 7. Write add and substract function to implement complex number addition.
*/


	Complex::Complex() 
	{
		x = 0;
		y = 0;

		cout << x << endl;
		cout << y << endl;
	}

	Complex::Complex(double real, double imaginary)
	{
		
		x = real;
		y = imaginary;
	}

	Complex :: ~Complex()
	{
		//Write Your Code Here 
		x = 0;
		y = 0;
	}

	void Complex::printComplex() const
	{
		
		int x, y;
		cout << x << "+" << y << "i" << endl;

	}

	double Complex::getReal() const
	{
			
		return x;

	}

	double Complex::getImaginary() const
	{
		
		return y;
	}

	void Complex::setReal(double real)
	{
		
		x = real;
	}

	void Complex::setImaginary(double imaginary)
	{
		 
		y = imaginary;
	}

	void Complex::addComplex(const Complex& comp)
	{
		x = comp1.getReal() + comp2.getReal();
		y = comp1.getImaginary() + comp2.getImaginary();
	
		if ( y > 0)
		{
		cout << " " << x << "+" << y << "i" << endl;
		}
		else 
		{
		cout << " " << x << "-" << y << "i" << endl;
		}
		
	}

	void Complex::substractComplex(const Complex& comp)
	{
		x = comp1.getReal() - comp2.getReal();
		y = comp1.getImaginary() - comp2.getImaginary();
	
		if ( y > 0)
		{
		cout << " " << x << "+" << y << "i" << endl;
		}
		else 
		{
		cout << " " << x << "-" << y << "i" << endl;
		} 
		
	}
	Complex :: comp (double w, double z)
	{
            x = w;
            y = z;
    }
    

int main()
{
	double x1, x2, y1, y2;
	bool r;
	
	Complex :: comp1 (double x1, double y1)
	{
            x = x1;
            y = y1;
    }
     Complex :: comp2 (double x2, double y2)
	{
            x = x2;
            y = y2;
    }
	
	cout << "Complex no.1: Enter real value = ";
	cin >> x1;
	cout << "Complex no.1: Enter imaginary value = ";
	cin >> y1;
	cout << "Complex no.2: Enter real value = ";
	cin >> x2;
	cout << "Complex no.2: Enter imaginary value = ";
	cin >> y2;
	
	cout << "Choose an operator: 1 for addition and 0 for subtraction. " ;
	cin >> r;
	
    if (r = 1)
    {
       comp.addComplex();
       comp.printComplex();
     }
     else if (r = 0)
     {
          comp.subtractComplex();
          comp.printComplex();
     }
     else ( r != 1 && r != 0 )
     {
          cout << "Choose a valid operator." << endl;
     }

	return 0;


}
