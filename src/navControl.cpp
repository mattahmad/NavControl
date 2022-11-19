#include <iostream>

int checkVelocity() {
  return 500/2;
}

int checkAcceleration() {
  return 500/4;
}

int checkTemperature() {
  return 20;
}

int checkPressure() {
    return 120;
}

int main() {
    std::cout << "System is starting"; 
    std::cout << "\nVelocity is: " << checkVelocity(); 
    std::cout << "\nAcceleration is: " << checkAcceleration(); 
    std::cout << "\nTermperature is: " << checkTemperature(); 
    std::cout << "\nPressure is: " << checkPressure(); 
    return 0;
}