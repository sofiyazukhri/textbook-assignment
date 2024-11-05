#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // declaration of variables
    double priceA=15,
           priceB=12,
           priceC=9;
    int numOfTicketsA,
        numOfTicketsB,
        numOfTicketsC;
    double incomeGenerated;
    
    //prompt user to input
    cout<<"Enter number of tickets for class A: ";
    cin>>numOfTicketsA;
    
    cout<<"\nEnter number of tickets for class B: ";
    cin>>numOfTicketsB;
    
    cout<<"\nEnter number of tickets for class C: ";
    cin>>numOfTicketsC;
    
    //formula
    incomeGenerated=(numOfTicketsA*priceA)+(numOfTicketsB*priceB)+(numOfTicketsC*priceC);
    
    //display
    cout<<fixed<<setprecision(2);
    cout<<"\nThe income generated from the tickets sales is $"<<incomeGenerated;
   
} 