#include <iostream>

using namespace std;

//********************************************
// Class Template definition
//********************************************

template <class T>
class mypair{
	T a,b;
	public:
		// Constructor
		mypair(T first, T second){
			a = first;
			b = second;
		}
		
		// member function declaration
		T getmax();
		T multiply();
};

//********************************************
// Member function definition
//********************************************


template <class T>
T mypair<T>::getmax ()
{
	T retval;
	retval = a > b ? a : b;
	return retval;
}

template <class T>
T mypair<T>::multiply()
{
	return (a*b);
}

//********************************************
// Main function implementation
//********************************************

int main(){
	double a,b;
	
	cin >> a >> b;
 	mypair<double> myObj(a,b); // class instantation
 	
	cout << myObj.getmax();
	cout << '\n';
	cout << myObj.multiply();

return 0;
}

