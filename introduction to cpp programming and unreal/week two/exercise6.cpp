#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>

int main(){
    float Angle;

    std::cout << "Enter the angle: ";
    std::cin >> Angle;

    float Aux;
    Aux = Angle;
    Aux *= M_PI / 180;

    std::cout << "Cosine of " << Angle << " is: " << cosf(Aux) << "\n";
    std::cout << "Sine of " << Angle <<  " is: " << sinf(Aux) << "\n";
}