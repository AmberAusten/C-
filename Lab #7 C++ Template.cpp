// author: amber
// section #:  45697
// purpose: color mixing results
// 

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void housekeeping()
{
	cout << "Get color mixing results." << endl;

}

void endOfJob()
{
	cout << "End of Job" << endl;
}
int main()
{
   // insert variable and constant declarations here
   string color1 = ""
   string color2 = ""
   string finalColor = ""
      
   // Get input values
    cout << "Enter first primary color: ";
	cin >> color1
	If color =! "yellow", "red", "blue" ;
	cout <<  "please enter red, yellow, or blue." ;
	cout << "Enter first primary color: "	;
	cin >> color1;
	cout << "Enter second primary color: "	;
	cin >> color2;
    If color =! "yellow", "red", "blue";
    cout <<  "please enter red, yellow, or blue.";
    Then cout << "Enter second primary color: ";

	// check for invalid color1 and color2. Be sure color1 != color2
	If color1 ==color2
	Then cout << "color 1 cannot equal color 2, enter a new color for color 2" 
	cout << "Enter second primary color: "	
	cin>> color2

// mix colors to get final color
	If ( color1 == "yellow" && color2 == "blue" || color1 == "blue" && color2 == "yellow")
	Then finalColor = "green" ;
else if
	If color1 == "red" ;
	And color2 == "yellow";
	Or;
	Color1 == "yellow" ;
	And color2 =="red";
	Then finalColor= "orange";


    If color1 == "red";
	And color2 == "blue";
	Or
	color1=="blue";
	And color2 =="red";
	Then finalColor= "purple" ;
	
	cout >> "Mixing ", color1, " and ", color2, " yields", finalColor;	
	

   
   
   
   
   housekeeping();

   
   
	endOfJob();
	return 0;
} // end main()

