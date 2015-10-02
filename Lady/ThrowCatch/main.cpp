#include "Employee.h"
#include "Exception.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
  long empID = 0;
  char empName[30];
  double pay = 0.0;

 cout << "Enter Employee ID : ";
 cin >> empID;

 cout << "\nEnter Employee Name : ";
 cin > empName;

  cout << "\nEnter Employee Pay : ";
  cin >> pay;

  Employee emp;
  
//Write Your Try and Catch Block Here.
//
try
{
 emp.setEmployeeID(empID);
}

catch (InvalidIDException& e)
{
 cout << e.m_message << empID;
}

 cout << "\nEnter Employee Name : ";
 cin >> empName;

 cout << "\nEnter Employee Pay : ";
 cin >> pay;

try
{
 emp.setTakeHomePay(pay);
}

catch (InvalidPayException& e)
{
 cout << e.m_message << pay << "\n";
}



  return 0;
}
