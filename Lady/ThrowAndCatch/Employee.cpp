#include "Employee.h"
#include "Exception.h"

#include <iostream>
#include <cstring>
using namespace std;

Employee::Employee()
  : m_employeeID(0), m_takeHomePay(0.0)
{
  m_employeeName[30] = 0;

  cout << "Employee::Employee()" << endl;
  //do the needful to initialize m_employeeName to default
}

Employee::Employee(long empID, char* empName, double takeHomePay)
{
  m_empID = empID;
  strcpy(m_employeeName, empName);
  m_takeHomePay = takeHomePay;

  cout << "Employee::Employee(long empID, char* empName, double takeHomePay)" << endl;

  //Do the needful to initialize all other variables.
}

Employee::~Employee()
{
  cout << "Employee::~Employee()" << endl;
}

void Employee::setEmployeeID(long empID)   
{

cout << "Employee::setEmployeeID(long empID)" << endl;
   // m_empID = empID;
   //check for the exception condition. And then set the Employee ID.
if (empID >= 0 )
	{
		m_empID = empID;
	}
else
	{
		throw InvalidIDException(empID);
	}
}

void Employee::setEmployeeName(char* empName)
{

cout << "Employee::setEmployeeName(char* empName)" << endl;
  //Set the Employee Name
  strcpy(m_employeeName, empName);
}

void Employee::setTakeHomePay(double takeHomePay)
{
	
cout << "void Employee::setTakeHomePay(double takeHomePay)" << endl;
  //Check for the Exception condition. And then set the Take Home Pay.
  
if (takeHomePay>= 0 )
	{
		m_takeHomePay = takeHomePay;
	}
else
	{
		throw InvalidPayException(takeHomePay);
	}



}

long Employee::getEmployeeID() const
{
  return m_empID;
}

const char* Employee::getEmployeeName() const
{
  return m_employeeName;
}

double Employee::getTakeHomePay() const
{
  return m_takeHomePay;
}

double Employee::calculateTakeHomePay()
{
  return m_takeHomePay;
}



