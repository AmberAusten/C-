// author: Amber
// section #:  45697
// purpose: Insert brief statement of program purpose
// This program will calculate your total with tax for this sale

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void housekeeping()
{
	cout << "This program will calculate your total with tax for this sale." << endl;

}

void endOfJob()
{
	cout << "End of Job" << endl;
}
int main()
{
   // insert variable and constant declarations here
		double priceProduct1 = 0.00;
		double priceProduct2 = 0.00;
		double priceProduct3 = 0.00;
		double priceProduct4 = 0.00;
		double priceProduct5 = 0.00;
		double salesTax = 0.00;
		double cusTotal = 0.00;
		double subTotal = 0.00;
		string custName;
	//Declare Constant
		const double SALES_TAX = 0.07;
   
   // insert program statements here
   housekeeping();
   
   // Get input values
  	cout << "Enter name  ";
	cin >> custName;
	cout << "Enter price of product 1  ";
	cin >> priceProduct1;
	cout <<"Enter price of product 2  ";
	cin >> priceProduct2;
	cout << "Enter price of product 3  ";
	cin >> priceProduct3;
	cout << "Enter price of product 4  ";
	cin >> priceProduct4;
	cout << "Enter price of product 5  ";
	cin >> priceProduct5;

   // Calculate subtotal  
   	subTotal = priceProduct1 + priceProduct2 + priceProduct3 + priceProduct4 + priceProduct5;
   	cout<< "Your subtotal is $" << subTotal<< endl ;
   	//Calculate sales tac
   	salesTax = SALES_TAX *subTotal;
	cout << "The sales tax for this purchase is $" << salesTax<< endl ;
	//Calculate total with tax and display 
	cusTotal = salesTax + subTotal;
	cout <<  "Your total purchase price will be $" << cusTotal <<endl;

	
	

   
   
   // Display output
   
   
	endOfJob();
	return 0;
} // end main()

