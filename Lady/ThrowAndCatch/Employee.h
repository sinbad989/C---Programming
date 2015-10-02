#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**@file Employee.h
* @brief ACTIVITY 5.3 Declares the Employee Class.
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
*
* <PRE>The participants will have to do following for this class.
* ACTIVITY 5.3
*
* 1. Declare Employee class which will act as a base class for all the derieved class of Employee
* 2. Declare 3-member variables for Employee. long m_employeeID, char m_employeeName[30], double m_takeHomePay.
* 3. Declare two Constructors. Employee() and Employee(long, char*, double)
* 4. Declare a destructor
* 5. Declare getters and setters for all the the variables.
* 6. Declare a method : double calculateTakeHomePay()
* 7. For each method print a console output.
*
* </PRE>
*/

/**@class Employee
* @brief Declaration of Employee Class.

*/

class Employee
{
 protected:

  long m_employeeID; ///<Stores employee ID
  char m_employeeName[30];///<stores employee name
  double m_takeHomePay;///<stores take home salary
  long m_empID;

 public:

  /**@fn Employee()
   * @brief Default Constructor.
   * This constructor will not take any argument.
   * It will initialize ALL the variable to ZERO/NULL.
   * The function should have a print statement to know when it is called.
   * @param none
   * @return none
   */
  Employee();

  /**@fn Employee(long, char*, double)
   * @brief Constructor with three arguments
   *
   * The function should have a print statement to know when it is called.
   * @param empID long
   * @param empName char*
   * @param takeHomePay double
   * @return none
   */
  Employee(long, char*, double);

  /**@fn ~Employee()
   * @brief Destructor
   *
   * The function should have a print statement to know when it is called.
   * @param none
   * @return none
   */
  ~Employee();

  /**@fn setEmployeeID(long)
   * @brief sets the employee ID.
   *
   * The function should have a print statement to know when it is called.
   * @param empID long
   * @return none
   */
  void setEmployeeID(long);

  /**@fn setEmployeeName(char*)
   * @brief sets employee name
   *
   * The function should have a print statement to know when it is called.
   * @param empName char*
   * @return none
   */
  void setEmployeeName(char*);

  /**@fn setTakeHomePay(double)
   * @brief sets take home pay.
   *
   * The function should have a print statement to know when it is called.
   * @param takeHomePay double
   * @return none
   */
  void setTakeHomePay(double);

  /**@fn getEmployeeID() const
   * @brief gets the employee ID.
   * The method must be a const.
   * The function should have a print statement to know when it is called.
   * @param none
   * @return empID long
   */
  long getEmployeeID() const;

  /**@fn getEmployeeName() const
   * @brief gets the employee name.
   * The method must be a const.
   * The function should have a print statement to know when it is called.
   * @param none
   * @return empName const char*
   */
  const char* getEmployeeName() const;

  /**@fn getTakeHomePay() const
   * @brief gets take home salary.
   * The method must be a const.
   * The function should have a print statement to know when it is called.
   * @param none
   * @return takeHomePay double
   */
  double getTakeHomePay() const;

  /**@fn calculateTakeHomePay()
   * @brief calculates the TakeHomePay.
   * This base method will only return the set value of take home pay. No calculations.
   *
   * The function should have a print statement to know when it is called.
   * @param none
   * @return takeHomePay double
   */
  double calculateTakeHomePay();

};

#endif
