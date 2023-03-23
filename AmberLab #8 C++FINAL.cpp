// author: Amber Vasquez
// purpose: calculating rainfall 
// Lab 8 5/2/2016

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void housekeeping()
{
	cout << "This program will calculate total and average rainfall." << endl;
}
void endOfJob()
{
	cout << "End of Job" << endl;
}
int main()
{
   // insert variable and constant declarations here 
		int nbrYears = 0;
		int currYear = 0 	;
		int month = 0;
		double inputRainfall = 0.00;
		double totalRainfall = 0.00 ;
		double avgRainfall = 0.00;
		double yearlyRainfall = 0.00;		
	// Declare constant
		int MONTHS_IN_YEAR = 12;

   cout << fixed << showpoint << setprecision(1);
   
   housekeeping();
   
   // Start outer loop
   cout << "Enter number of years:  ";
   cin >> nbrYears;
	for (currYear = 1;currYear <= nbrYears; currYear ++)
    {
		 // start inner loop 
		for (month = 1; month <=12;month ++)
		{
		cout << "How many inches of rainfall occurred for the month:  ";
		cin >> inputRainfall;
		totalRainfall = totalRainfall + inputRainfall;
		}

   }
   // Display output
   avgRainfall = (totalRainfall/MONTHS_IN_YEAR);
   cout << "Total inches of rainfall for the year:  "  <<totalRainfall << endl;
   cout << "Average inches of rainfall per month:  "   <<avgRainfall << endl;

	endOfJob();
	return 0;
} // end main()
   



