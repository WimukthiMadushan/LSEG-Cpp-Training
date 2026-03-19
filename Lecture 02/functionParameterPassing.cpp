#include <iostream>

int incrementByValue(int x){
    x = x+1 ;
}
int incrementByReference(int& x){
    x = x+1;
}


int main() {
    int number = 10;
    std::cout << "Initial value: " << number << std::endl;
    // Output: Initial value: 10

    incrementByValue(number);
    std::cout << "After pass by value: " << number << std::endl;
    // Output: After pass by value: 10

    incrementByReference(number);
    std::cout << "After pass by reference: " << number << std::endl;
    // Output: After pass by reference: 11

    return 0;
}