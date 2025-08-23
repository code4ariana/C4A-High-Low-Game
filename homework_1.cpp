/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;


int main()
{

    const double state_tax = 0.04;
    const double country_tax = 0.02;
    double  total_sales_tax,
            purchase_price, 
            final_price;

    double tax_amount;
    
    cout << "The country tax is\n" << country_tax;
    cout << "\n";
    cout << "The state_tax is\n" << state_tax;
    cout << "\n";
    //cout << "The total sales tax is\n" <<  total_sales_tax;
   // cout << "\n";
    cout << "What is the purchase_price\n";
    cin >> purchase_price;
    cout << "\n";
    total_sales_tax = (purchase_price * state_tax) + (purchase_price * country_tax);
    cout << "The total sales tax is \n" << total_sales_tax;
    total_sales_tax = total_sales_tax + purchase_price;
    cout << "\n";
    cout << "Final Price: " << total_sales_tax;

    return 0;
}

