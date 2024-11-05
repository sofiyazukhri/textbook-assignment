#include <iostream>
using namespace std;

int main() {
    // declaration of variables
    double totalSalesTax, purchase=95;
    const double stateSalesTax=0.04,countySalesTax=0.02;
    //formula
    totalSalesTax=(stateSalesTax*purchase)+(countySalesTax*purchase);
    //print out the total sales tax for the purchase
    cout<<"The total sales tax for purchase of 95 dollars is "<<totalSalesTax<<" dollars";
}