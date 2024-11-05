#include <iostream>
using namespace std;

int main() {
    // declaration of variables
    double sugarfor48=1.5,
           butterfor48=1,
           flourfor48=2.75,
           numOfCookies,
           sugar,
           butter,
           flour;
    //prompt user to enter the number of cookies 
    cout<<"Enter the number of cookies you want to make: ";
    cin>>numOfCookies;
    //calculate the correct amount of the ingredients
    sugar=(1.5/48)*numOfCookies;
    butter=(1.0/48)*numOfCookies;
    flour=(1.0/48)*numOfCookies;
    //display
    cout<<"\nThis is the recipe needed for you to make "<<numOfCookies<<" cookies.";
    cout<<"\n"<<sugar<<" cups of sugar\n";
    cout<<butter<<" cups of butter\n";
    cout<<flour<<" cups of flour\n";
           
}