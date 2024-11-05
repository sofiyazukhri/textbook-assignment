#include <iostream>
using namespace std;

int main() {
    // declaration of variables
    double gallons,numMilesFullTank,numMilesperGallon;
    //prompt the user to input 
    cout<<"Enter the number of gallons of gas the car can hold: ";
    cin>>gallons;
    
    cout<<"\nEnter the number of miles it can be driven on a full tank: ";
    cin>>numMilesFullTank;
    
    //formula to calculate num of miles per gallon of gas
    numMilesperGallon=numMilesFullTank/gallons;
    //display 
    cout<<"The number of miles that may be driven per gallon of gas: "<<numMilesperGallon<<" miles";

    
}