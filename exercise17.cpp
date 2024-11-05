#include <iostream>
#include <string>
using namespace std;

int main() {
    // declaration of variables
    string name,
           city,
           college, 
           profession,
           animal, 
           petName;
    int age;
    //prompt user to enter
    cout<<"Enter your name: ";
    getline(cin,name);
    
    cout<<"Enter your age: ";
    cin>>age;
    cin.ignore();
    
    cout<<"Enter the name of a city: ";
    getline(cin,city);
    
    cout<<"Enter the name of a college: ";
    getline(cin,college);
    
    cout<<"Enter a profession: ";
    getline(cin,profession);
    
    cout<<"Enter a type of animal: ";
    cin>>animal;
    cin.ignore();
    
    cout<<"Enter a pet's name: ";
    getline(cin,petName);
    
    //display the story
    cout<<"\nThere once was a person named "<<name<<" who lived in the "<<city<<". At the age of "<<age<<", "<<name<<" went to college at "<<college<<". "<<name<<" garduated and went to work as a "<<profession<<". Then, "<<name<<" adopted a(n) "<<animal<<" named "<<petName<<". They both lived happily ever after!";
}