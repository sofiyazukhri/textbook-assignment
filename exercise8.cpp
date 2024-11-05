#include <iostream>
using namespace std;

int main() {
    // declaration
    double item1=15.95,
           item2=24.95,
           item3=6.95,
           item4=12.95,
           item5=3.95,
           subtotal,
           salesTax,
           total;
    //formula
    subtotal=item1+item2+item3+item4+item5;
    salesTax=0.07*subtotal;
    total=subtotal+salesTax;
    
    //display
    cout<<"Item 1: $"<<item1;
    cout<<"\nItem 2: $"<<item2;
    cout<<"\nItem 3: $"<<item3;
    cout<<"\nItem 4: $"<<item4;
    cout<<"\nItem 5: $"<<item5;
    cout<<"\n\nSubtotal: $"<<subtotal;
    cout<<"\nSales tax: $"<<salesTax;
    cout<<"\nTotal: $"<<total;
    
           
}