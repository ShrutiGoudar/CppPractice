#pragma once

#include <iostream>
#include <string>

//Car class with constructor, destructor, copy constructor and assignment operator."
using namespace std;

class Car {
public: 
	Car():
	year{2000},
	model{"BMW"},
	licensePlate{"007"},
	make{"unknown"} 
	{
		cout << "Car created" << endl;
	}
	~Car(){
		cout << "Car destroyed" << endl;
	}
	Car(const Car &copyFrom){ //Deep Copy
		cout << "Car copied" << endl;
		year = copyFrom.year;
		make = copyFrom.make;
		model = copyFrom.model;
		licensePlate = copyFrom.licensePlate;
	}

	//Copy Assignment operator overloading = operator
	Car& operator=(const Car &copyFrom){ //Deep Copy
		cout << "Car assigned" << endl;
		if (this == &copyFrom) {
			return *this; // handle self assignment car1 = car1
		}
		year = copyFrom.year;
		make = copyFrom.make;
		model = copyFrom.model;
		licensePlate = copyFrom.licensePlate;
		return *this;
	}

	//Copy Assignment operator 
	// copy assignmnent operator and overloading = operator mean the same thing.
	// This way of implementation doesnt support cahining assignments like a = b = c
	// because it has void return type.
	/* void operator=(const Car &assignFrom) {  

		cout << "Car assigned" << endl;
		year = assignFrom.year;
		make = assignFrom.make;
		model = assignFrom.model;
		licensePlate = assignFrom.licensePlate;
	} */
	//Move Constructor
	Car(Car&& obj) :
		year{obj.year},
		make{std::move(obj.make)},          // MOVE the string resources
		model{std::move(obj.model)},        // Transfer ownership
		licensePlate{std::move(obj.licensePlate)} {
		cout << "user defined move constructor called" << endl;
		
		// Reset moved-from object (optional but good practice)
		obj.year = 0;
		obj.make = "";
		obj.model = "";
		obj.licensePlate = "";
	}
	//Move assignment operator 
	Car& operator=(Car&& moveFrom){
		cout << "Move assignment operator called" << endl;
		if (this == &moveFrom) {
			return *this; // handle self assignment car1 = car1
		}
		
		// Move the data from moveFrom to this object
		year = moveFrom.year;  //No ownership concept: Integers are just values, not resources
								/* Copy is cheap: Copying an int is as fast as moving it
								No internal resources: No dynamic memory or handles to transfer
								std::move() has no effect: Moving an int is identical to copying it */
		make = std::move(moveFrom.make);
		model = std::move(moveFrom.model);	//Strings often allocate dynamic memory for their character data
		licensePlate = std::move(moveFrom.licensePlate); 	//std::move enables optimization and avoids unnecessary memory allocation and copying
		
		// Reset the moved-from object to a valid but unspecified state
		moveFrom.year = 0;
		moveFrom.make = "";
		moveFrom.model = "";
		moveFrom.licensePlate = "";
		//  incase there are pointer objects , they need to be freed : delete[] var
		return *this;
	} 
	void display() {
		cout << " Year 			: " << year << endl;
		cout << " Model 			: " << model << endl;
		cout << " Make 			: " << make << endl;
		cout << " licensePlate 		: " << licensePlate << endl;
	}
	
private :
	int year;
	string make;
	string model;
	string licensePlate;
};
int carInventory();