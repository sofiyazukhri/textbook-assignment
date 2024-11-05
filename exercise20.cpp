#include <iostream>
using namespace std;

int main() {
    //declaration of the variable
    double loanPayment,
           insurance,
           gas,
           oil,
           tires,
           maintenance,
           monthlyCost,
           annualCost;
    //prompt user to input
    cout<<"Enter your loan payment per month:RM ";
    cin>>loanPayment;
    
    cout<<"Enter your insurance cost per month:RM ";
    cin>>insurance;
    
    cout<<"Enter your gas cost per month:RM ";
    cin>>gas;
    
    cout<<"Enter your oil cost per month:RM ";
    cin>>oil;
    
    cout<<"Enter your tires cost per month:RM ";
    cin>>tires;
    
    cout<<"Enter your maintenance per month:RM ";
    cin>>maintenance;
    
    //calculation
    monthlyCost=loanPayment+insurance+gas+oil+tires+maintenance;
    annualCost=monthlyCost*12;
    //display the result
    cout<<"\nTotal monthly cost is RM "<<monthlyCost;
    cout<<"\nTotal annual cost is RM "<<annualCost;
    
}