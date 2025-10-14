#include "carInventory.h"

int carInventory() {
    std::cout << "=== Car Smart Pointer Demo ===" << std::endl;
    
    // Create a car object
    Car car1;
    
    // Test copy constructor
    Car car2 = car1;
    
    // Test assignment operator
    Car car3;
    car3 = car1;
    
    std::cout << "=== End of Demo ===" << std::endl;
    return 0;
}