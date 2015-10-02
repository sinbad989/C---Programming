#include <iostream>
#include <string>
#include "GradeActivity.h"

using namespace std;

int main()
{
	double testscore;
	string exceptionString;
	
	GradeActivity test;
	
	cout << "Enter your score:";
	cin >> testscore;
	
	try
	{
	 test.setScore(testscore);
	 //cout << test.getLetterGrade() << endl;
	}

	catch(string exceptionString)
	{
		cout << exceptionString << endl;
	}
	
	
	

return 0;
}
