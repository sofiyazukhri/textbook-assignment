#include <iostream>
using namespace std;

int main() {
    // declaration of variables
    double F,//Fahrenheit 
           C;//celcius
   //prompt user to enter
   cout<<"Enter the temperature in Celcius: ";
   cin>>C;
   // formula
   F=((9/5)*C)+32;
   //display
   cout<<"The temperature in Fahrenheit is "<<F;
}