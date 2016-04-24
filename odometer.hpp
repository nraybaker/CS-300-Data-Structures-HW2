/*******************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Program: #2
	 
	 
	Description of the problem:
	* 	This program implements the Odometer class
	* 	We will be able to:
	* 	 print miles driven, gallons used, and miles
	* 	    per gallon
	* 	 add a trip and recalculate the mpg
	* 	 check the remaining miles we could drive given the number of 
	* 		gallons left 

	Psuedo Code:
	Class Name: Odometer
	Simulate an Odometer

		Data:
			miles - integer
			gallons - float
			miles per gallon - float
	
		Mutator Functions:
	
		Accesor Functions:
		
		Function: Odometer
			Default constructor - zero out all variables
			Inputs: None
			Outputs: None
			Return: N/A (zero out all variables)
		
		Function: Odometer
			constructor that accepts miles and gallons and calculates mpg
			Inputs: miles, gallon
			Outputs: None
			Return: N/A
				miles = miles passed in
				gallons = gallons passed in
				miles per gallon = miles / gallons
			
		Function: add_trip
			takes the number of gallons and number of miles and adds it to 
			 the previous values, calculating the new miles per gallon for 
			 the total trip
			Inputs: miles to add, gallons to add
			Outputs: None
			Return: N/A
				miles += new miles
				gallons += new gallons
				mpg = miles / gallons
			
		Function: check_mileage
			Given a number of gallons as a parameter, based on the miles per
			 gallon in the class will return how many miles can be driven
			Inputs: gallons in tank
			Outputs: None
			Return: miles that can be driven given current miles per gallon
				return gallons in tank * miles per gallon
				
		Function: print_odometer
			prints out the miles, gallons, and miles per gallon
			Inputs: None
			Outputs: miles, gallons, and miles per gallon
			Return: N/A
				print miles
				print gallons
				print miles per gallon
*/



class Odometer
{
	//variable
	int miles;
	float gallons;
	float mpg;
	
public:
	//default constructor
	Odometer();
		
	//constructor
	Odometer(int mi, float gal);
		
	//add_trip adds miles and gallons and recalculates mpg
	void add_trip(int mi, float gal);
		
	//check mileage returns how many miles left to driven given gallons 
		//and current mpg
	float check_mileage(float gal);
		
	//print_od prints miles driven, gallons used, and current mpg
	void print_odometer();
};



