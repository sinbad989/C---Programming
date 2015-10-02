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

 cout << "Enter Employee ID: ";
 cin >> empID;
 cout << "Enter Employee Name : ";
 cin >> empName;
 cout << "Enter Employee Pay : ";
 cin >> pay;

  Employee emp;

//Write Your Try and Catch Block Here.
//

try
{
	emp.setEmployeeID(empID);
	emp.setEmployeeName(empName);
	emp.setTakeHomePay(pay);
}
catch(InvalidIDException e)
{
	cout << '\n' << e.m_message << e.m_empID << endl;
}

catch(InvalidPayException e)
{
	cout << '\n' << e.m_message << endl;
}

  return 0;
}
