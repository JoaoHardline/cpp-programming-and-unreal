//temperature conversions 
#include<iostream>

int main() {
    float Celsius;
    float Fahrenheit;

    std::cin >> Celsius;

    //Celsius = 5/9 * (Fahrenheit - 32);
    Fahrenheit = ((Celsius*9)/5) + 32;
    
    std::cout << Fahrenheit;
    
}