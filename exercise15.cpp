#include <iostream>
using namespace std;

int main() {
    //declaration of the variables
    double numMales,numFemales;
    double percentageMales,percentageFemales;
    //prompt user to enter the number of females and males students in the class 
    cout<<"The number of males in the class is: ";
    cin>>numMales;
    
    cout<<"The number of females in the class is: ";
    cin>>numFemales;
    //calculate the percentage of females and males
    percentageMales=(numMales/(numMales+numFemales))*100;
    percentageFemales=(numFemales/(numMales+numFemales))*100;
    //display
    cout<<"\nThe percentage of males in the class is "<<percentageMales<<
    "%.\n";
    cout<<"The percentage of females student in the class is "<<percentageFemales<<"%.\n";
    
}