// author: Amber Vasquez
// section #:  45697
// purpose: calculates cost of building a home 
// 

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void housekeeping()
{
	cout << "User will enter inputs number of garage spaces, number of bedrooms, number of bathrooms, and lot number. Program will calculate the cost of building the home." << endl;

}

void endOfJob()
{
	cout << "End of Job" << endl;
}
int main()
{
   // declare variables
   int lotNumber = 0;
   int numberBedrooms = 0;
   int numberBathrooms = 0;
   int numberGarageSpaces = 0;
   double homePrice = 0.0;

   //Declare constants 
   const double BASE_PRICE = 50000.00;
   const double BEDROOM_PRICE = 17000.00;
   const double BATHROOM_PRICE = 12500.00;
   const double GARAGE_PRICE = 6000.00;
   
   // call housekeeping
   housekeeping();
   
   // Get input values
   cout << "Enter lot number:";
   cin  >> lotNumber;
   cout << "Enter number of bedrooms:";
   cin  >> numberBedrooms;
   cout << "Enter number of bathrooms:";
   cin  >> numberBathrooms;
   cout << "Enter number of garage spaces:";
   cin  >> numberGarageSpaces;
   
   // Calculate Home Price    
   homePrice = BASE_PRICE + (numberBedrooms * BEDROOM_PRICE) + (numberBathrooms * BATHROOM_PRICE) + (numberGarageSpaces * GARAGE_PRICE);
   // Display output
   cout << "The price of the home is $" <<homePrice << endl;

	//Call end of job
	endOfJob();
	return 0;
} // end main()

