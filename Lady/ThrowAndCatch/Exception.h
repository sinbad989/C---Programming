#ifndef EXCEPTION_H
#define EXCETPION_H
/**@file Exception.h
 * @brief Activity 9.1 : Gives practice for Exception Handling, Inline Functions, string stream.
 * <PRE>
 * ACTIVITY 9.1
 * 1. Use Employee class declared in Activity 5.3.
 * 2. Declare Two exception classes in Exception.h file. 1. InvalidIDException and 2. InvalidPayException.
 * 3. Declare two public variable in each classes to store the respective variable and error message.
 * 4. Declare two constructors for each of the Exception class - one default and another with a single argument taking long for InvalidIDException and double for InvalidPayException.
 * 5. Modify the code in Employee.cpp file as follows.
 *    - In setEmployeeID() check whether the m_employeeID is -ve, if it is then throw InvalidIDException.
 *    - In setTakeHomePay() check whether the m_takeHomePay is -ve, if it is then throw InvalidPayException.
 * 6. Write main, take three variables(empID, empName, pay) from the user. Store in local variable.
 * 7. Create an Employee object with default constructor.
 * 8. Use individual set functions for setting object values. Put entire set code into try block.
 * 9. Write two catch blocks which catches two different exceptions.
 */

#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

class InvalidIDException
{
 public:
  long m_empID;
  string m_message;

 public:
  InvalidIDException()
    {
	    //Set m_empID to default value of 0
      m_empID = 0;
	    m_message = "InvalidIDException: Invalid Employee ID.";

    }

  InvalidIDException(long empID)
    {
	    //Set m_empID to empID
      m_empID = empID;
	    m_message = "InvalidIDException: Invalid Employee ID " + m_empID;
    }
};

class InvalidPayException
{
 public:
  double m_pay;
  string m_message;

  InvalidPayException()
    {
	    //Set m_pay to default value of 0.0
      m_pay = 0.0;
	    m_message = "InvalidPayException: Invalid Pay.";

    }
  InvalidPayException(double pay)
    {
      m_pay = pay;
      ostringstream oss;
      oss << m_pay;
      m_message = "InvalidPayException: Invalid Pay " + oss.str();
    }
};

#endif //EXCEPTION_H
