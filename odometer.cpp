/***************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Program: #2

*/


#include <iostream>
#include "odometer.hpp"
using namespace std;

//Default constructor
Odometer::Odometer()
{
	miles = 0;
	gallons = 0;
	mpg = 0;
}

//Constructor; if gallons = 0, mpg has divide by zero error
//	so if gallons == 0, mpg is set to 0
Odometer::Odometer(int mi, float gal)
{
	miles = mi;
	gallons = gal;
	
	if(gallons == 0)
		mpg = 0;
	else
		mpg = miles/gallons;
}

//add_trip function, same case as above if gallons still = 0
//	otherwise it simply adds a trip to the odometer
void Odometer::add_trip(int mi, float gal)
{	
	miles += mi;
	gallons += gal;
	if(gallons == 0)
		mpg = 0;
	else
		mpg = miles/gallons;
}

//check_mileage sees how many miles could be traveled based on 
//	how gallons are left and the current mpg
float Odometer::check_mileage(float gal)
{
	return gal*mpg;
}

//print_odometer prints the contents of the odometer named
void Odometer::print_odometer()
{
	cout << "Miles Driven: " << miles << "  Gallons Used: " << gallons << 
		"   Current MPG: " << mpg << endl;
}

