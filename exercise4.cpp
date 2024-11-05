#include <iostream>
using namespace std;

int main() {
    // declare the variables
   double mealCost, tax, tip,totalBill;
   mealCost=88.67;
    //formula
    tax=0.0675*mealCost;
    tip=0.2*(tax+mealCost);
    totalBill=tax+mealCost+tip;
    //display
    cout<<"Meal cost: "<<mealCost;
    cout<<"\nTax amount: "<<tax;
    cout<<"\nTip amount: "<<tip;
    cout<<"\nTotal bill: "<<totalBill;
}