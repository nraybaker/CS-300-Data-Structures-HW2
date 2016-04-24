/*******************************************************************************
 * Author: Nathan Baker
 * Student ID: A767P375
 * Program: #2
 * 
 * 
*/


#include <iostream>
#include "odometer.cpp"

using namespace std;

int main()
{
	//testing the class
	cout << "Testing the Odometer class several times: " << endl << endl;
	
	
	//testing the default constructor
	cout << "Creating od with default constructor and printing: " << endl;
	Odometer od;
	od.print_odometer();
	
	//testing the add_trip function, mpg will be 0 if gallons is 0
	//	in this case gallons is 20
	cout << endl << "Adding a trip to 'od' and printing again: " << endl;
	od.add_trip(1000, 20);
	od.print_odometer();
	
	//testing the check_mileage function for 8.5 gallons at current mpg and print
	cout << endl << "Checking the mileage of od for 8.5 gallons: " << endl;
	cout << "Miles left to be driven at current mileage: " << 
			od.check_mileage(8.5) << " miles" << endl;
	
	
	//testing non-default constructor
	cout << endl << "Creating od1 with normal constructor and printing: " << endl;
	Odometer od1(100, 10);
	od1.print_odometer();
	
	//add trip to this new odometer and print
	cout << endl << "Adding a trip to od1 and printing again: " << endl;
	od1.add_trip(15678, 265.597);
	od1.print_odometer();
	
	//check_mileage for 157.988 gallons at current mpg
	//	this shows it can handle decimal values
	cout << endl << "Checking the mileage of od for 157.988 gallons: " << endl;
	cout << "Miles left to be driven at current mileage: " <<
			od.check_mileage(157.988) << " miles" << endl;
			
	cout << endl << "Creating od2 with normal constructor with 0 gallons: " << endl;
	Odometer od2(500, 0);
	od2.print_odometer();
	cout << endl << "Since gallons is 0 the constructor sets mpg to 0 because of";
	cout << " possible divide by zero error." << endl;
	
	cout << endl << "Adding a trip to od2 and printing again: " << endl;
	od2.add_trip(1500, 0);
	od2.print_odometer();
	cout << endl << "Since after adding a trip gallons is still 0,";
	cout << " so mpg is again set to 0" << endl;
	
	cout << endl << "Since mpg is still 0 when we check mileage we can";
	cout << " technically only travel 0 miles according to check_mileage:" << endl;
	cout << "Miles left to be driven at 0 mpg for 15 gallons: " << 
			od.check_mileage(15) << " miles" << endl;
	
	return 0;
}
