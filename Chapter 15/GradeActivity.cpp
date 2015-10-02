#include "GradeActivity.h"
#include <string>

char GradeActivity::getLetterGrade() const
{
	char letterGrade;
	char str;
	
	if (score > 100)
		throw "Your grade is greater than the limit!";
	else if (score > 89)
		letterGrade = 'A';
	else if (score > 79)
		letterGrade = 'B';
	else if (score > 69)
		letterGrade = 'C';
	else if (score > 59)
		letterGrade = 'D';
	else
		letterGrade = 'F';
		
return letterGrade;
}


