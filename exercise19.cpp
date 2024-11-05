#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // declare the variables
    double dollar,yen,euros ;
    const double YEN_PER_DOLLAR=98.93;
    const double EUROS_PER_DOLLAR=0.74;
    //prompt user to enter
    cout<<"Enter your money in dollar: ";
    cin>>dollar;
    //calculation
    yen=dollar*YEN_PER_DOLLAR;
    euros=dollar*EUROS_PER_DOLLAR;
    //display the conversion
    cout<<dollar<<" Dollar = "<<yen<<" Yen\n";
    cout<<dollar<<" Dollar = "<<euros<<" Euros";
    
}