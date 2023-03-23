// author: Amber Vasquez
// section #: 45697
// purpose: Compute total pay from base salary, commission and sales.
// 

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
   // Declare variables
   double baseSalary = 0.0;
   double totalSales = 0.0;
   double totalPay = 0.0;
   
   // Declare constant
   const double COMMISSION_RATE = .08;
   
   // Get input salesAmount
   cout << "Enter total sales this month: ";
   cin >> totalSales;
   cout << "Enter base salary: ";
   cin >> baseSalary;
   
   // Calculate total pay
   totalPay = (totalSales*COMMISSION_RATE)+baseSalary;
   
   // Output total pay
   cout << "Your total pay this month is $" << baseSalary << " is $" << totalPay << endl;

   return 0;
}

