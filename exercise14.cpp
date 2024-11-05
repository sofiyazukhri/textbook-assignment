#include <iostream>
using namespace std;

int main() {
    //declaration of variables
    string month1,month2,month3;
    double average,rain_inches1,rain_inches2,rain_inches3;
    //prompt user to enter
    //month1
    cout<<"Enter the name of the first month: ";
    cin>>month1;
    cout<<"Enter the amount of rain (in inches) that fell during this month: ";
    cin>>rain_inches1;
    //month2
    cout<<"\nEnter the name of the second month: ";
    cin>>month2;
    cout<<"Enter the amount of rain (in inches) that fell during this month: ";
    cin>>rain_inches2;
    //month3
    cout<<"\nEnter the name of the third month: ";
    cin>>month3;
    cout<<"Enter the amount of rain (in inches) that fell during this month: ";
    cin>>rain_inches3;
    
    //formula
    average=(rain_inches1+rain_inches2+rain_inches3);
    //display
    cout<<"\nThe average rainfall for "<<month1<<", "<<month2<<", and "<<month3<<" is "<<average<<" inches.";
}