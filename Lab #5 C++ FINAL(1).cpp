// author: Amber
// purpose: Calculate student average 
// 

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void housekeeping()
{
	cout << "This program will compute a student's test average. " << endl;

}
int getStuID(int studentID)
{
	cout << "Enter Student ID: ";
	cin >> studentID;
	return studentID;
}
double computeAverage(double test1, double test2, double test3)
{
	double average = 0.0;
	const int nbrTests = 3;
	// compute average
	average= (test1+test2+test3)/nbrTests;
	return average;
}
double getTestData(double &test1, double &test2, double &test3)
{
	double average = 0.0;
	// get 3 test scores
	cout << "Enter Test 1: ";
	cin >> test1;
	cout << "Enter Test 2: ";
	cin >> test2;
	cout << "Enter Test 3: ";
	cin >> test3;
	average =computeAverage(test1, test2, test3);
	return average;
}
void endOfJob()
{
	cout << "End of Job" << endl;
}

int main()
{
   // declarations
   int studentID = 0;
   double studentTest1 = 0.0,studentTest2 = 0.0, studentTest3 = 0;
   int nbrStudents = 0;
   double accumAvg = 0.0, overallAvg = 0.0;
   char moreInput = 'Y';
   double studentAverage=0.0;
   int countStudents=0;
   
   // insert program statements here
    housekeeping();
   // get student ID
  
	do
	{
		countStudents++;
		// get student id and Test Scores
		studentID = getStuID(studentID);  
		
		
		
		// compute average and grade
		studentAverage = getTestData(studentTest1, studentTest2, studentTest3);
		cout<< "your average is "<<studentAverage<<endl;
		overallAvg=overallAvg + studentAverage;
		
		// more input?
		cout << "Is there more input ('Y' or 'N'): ";
		cin >> moreInput;
					
	} while (moreInput == 'Y' || moreInput == 'y'); // end do/while 
	overallAvg = overallAvg / countStudents;
	cout<< "The overall average for "<<countStudents<<" students is " << overallAvg<<endl;
	endOfJob();
	
	return 0;
} // end of main()

