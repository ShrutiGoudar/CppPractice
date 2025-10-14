#pragma once

#include <iostream>
#include <string>

//Car class with constructor, destructor, copy constructor and assignment operator."
using namespace std;

class Car {
public: 
	Car(){
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

	
private :
	int year;
	string make;
	string model;
	string licensePlate;
};
int carInventory();