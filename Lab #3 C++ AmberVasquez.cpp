// author: Amber Vasquez
// section #: 4569702
// purpose: Program calculates cost of text message plan with Dash Cell Phone
// 

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void housekeeping()
{
	cout << "Calculate your cell phone bill. " << endl;

}

void endOfJob()
{
	cout << "End of Job" << endl;
}
int main()
{
   // declare variables
   int numberMessages = 0;
   double monthEndBill = 0.00;
   double billAfterTaxes = 0.00;
   
   // declare constants
   const double BASIC_BILL = 5.00;
   const double TAX_RATE = .12;
   
   // call housekeeping
   housekeeping();
 
   // Get input
    cout << "Enter number of messages:";
    cin  >> numberMessages;
    // calculate monthEndBill
    if (numberMessages <=60) 
	{monthEndBill = BASIC_BILL;}
	else if (numberMessages>60 && numberMessages<=180)
	{monthEndBill=BASIC_BILL + ((numberMessages-60)*.05);}
	else if (numberMessages > 180)
	{monthEndBill=BASIC_BILL + (120*.05)+((numberMessages-180)*.10);}

    //Display your end of month bill
    cout << "Your end of month bill is $" <<monthEndBill << endl;
    
    //calculate  bill after taxes 
    billAfterTaxes = (monthEndBill*TAX_RATE) + monthEndBill;
    // Display bill after taxes
    cout << "Bill after taxes: $" <<billAfterTaxes << endl;
    	
   	 
   housekeeping();
  	
		// get number of texts
		
		// compute bill
		
		// display bill
			
	endOfJob();
	return 0;
}

