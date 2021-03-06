#ifndef COMPLEX_H
#define COMPLEX_H

/**@file Complex.h
* @brief ACTIVITY 2.1 : Declares the Complex Class.
*
* <BR>NAME:
* 
* <BR>BASE CLASSES:
* 
* <BR>PURPOSE:
*
* <BR>AUTHOR:
* <BR>
* <BR>$Revision: $
* 
* <BR>$Log:
* 
* <BR>COPYRIGHT NOTICE:
* <BR>Copyright (c) 2005 C++ Capability team at Accenture. All rights reserved.
*/

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
* 8. Write a main.
* 9. Create objects of Complex class.
* 10. Call different methods of the class in the main.
* 11. Use cout to print results of different functions.
* NOTE : We shall be using class developed over here in our future activities.
* </PRE>
*/

class Complex
{
 private:
  double x; ///<Variable to store real part of Complex Number
  double y; ///<Variable to store imaginary part of Complex Number

 public:
  /**@fn Complex
   * @brief Default Constructor.
   * This constructor will not take any argument.
   * It will initialize both the variable to ZERO.
   * The function should have a print statement to know when it is called.
   * @param none
   * @return none
   */
  Complex();
  
  /**@fn Complex(double, double)
   * @brief Constructor taking two double variables.
   * It takes two double parameters and stores it in local class variables.
   * The function should have a print statement to know when it is called.
   * @param real double
   * @param imaginary double
   * @return none
   */ 
  Complex(double, double);
  
  /**@fn ~Complex
   * @brief Destructor.
   * The function will just have one print statement to know when it is called.
   * @param none
   * @return none
   */
  ~Complex();
  
  /**Function to print the content of class Complex.
   * The function will print the content of the Complex as : ( real, imaginary ) 
   * @param none
   * @return none
   */
  void printComplex() const;
  
  /**returns the real part of Complex.
   * The function MUST be constant, to prevent changing class content of Complex.
   * @param none
   * @return real double
   */
  double getReal() const;
  
  /**returns the Imaginary part of Complex.
   * The function MUST be constant, to prevent changing class content of Complex.
   * @param none
   * @return real double
   */
  double getImaginary() const;
  
  /**sets the real part of Complex.
   * sets the real part of Complex
   * @param real double
   * @return none
   */
  void setReal( double real );
  
  /**sets the Imaginary part of Complex.
   * sets the Imaginary part of Complex
   * @param real double
   * @return none
   */
  void setImaginary(double imaginary);
  
  /**adds another Complex variable to current object.
   * adds another Complex variable to current object.
   * @param comp const Complex&
   * @return none
   */
  void addComplex( const Complex & );
  
  /**substracts another Complex variable from current object.
   * substracts another Complex variable from current object.
   * @param comp const Complex&
   * @return none
   */
  void substractComplex(const Complex &);
};
#endif //COMPLEX_H
