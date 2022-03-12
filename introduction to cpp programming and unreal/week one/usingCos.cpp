#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>



int main(){

   float Angle{ 45 };

    //convert angle to radians
    Angle = Angle * M_PI / 180;

   //calculate and print the cosine of 45 degrees
   float Cosine = cosf(Angle);
   std::cout << "Cosine of 45 degrees: " << Cosine << "\n";


}