#include "carInventory.h"

int carInventory() {
    std::cout << "=== Car Smart Pointer Demo ===" << std::endl;
    
    // Create a car object
    Car car1; 
    car1.display();
    // Test copy constructor
    Car car2(car1);
    
    // Test assignment operator
    Car car3;
    car3 = car1;
    
    //Create a vector of cars
//Day2 : Convert it to use move constructor and move assignment. Show how moving avoids deep copies
    Car carMove = std::move(car1); //default/user defined move assignment operator
    Car carConst(carMove);          // default/user defined move constructor
    carMove.display();
    carConst.display();
    std::cout << "=== End of Demo ===" << std::endl;
    return 0;
}