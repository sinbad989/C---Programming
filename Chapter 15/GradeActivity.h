#ifndef GRADEACTIVITY_H
#define GRADEACTIVITY_H


// GradeActivity class declarations
class GradeActivity
{
	private:
		double score;
	public:
		//Default constructor
		GradeActivity()
		{
			score = 0.0;
		}
		
		//Constructor
		GradeActivity(double s)
		{
			score = s;
		}
		
		//Mutator function
		void setScore(double s)
		{
			score =s;
		}
		
		//Accessor function
		double getScore() const
		{
			return score;
		}
		
	char getLetterGrade() const;
};
#endif

