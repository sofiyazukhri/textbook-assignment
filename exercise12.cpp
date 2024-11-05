#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // declaration of variables
    double test1,test2,test3,test4,test5,
           average;
    //prompt user to input
    cout<<"Enter first test score: ";
    cin>>test1;
    
    cout<<"\nEnter second test score: ";
    cin>>test2;
    
    cout<<"\nEnter third test score: ";
    cin>>test3;
    
    cout<<"\nEnter fourth test score: ";
    cin>>test4;
    
    cout<<"\nEnter fifth test score: ";
    cin>>test5;
    //formula
    average=(test1+test2+test3+test4+test5)/5;
    //display
    cout<<fixed<<setprecision(1);
    cout<<"\nThe average: "<<average;
   
}