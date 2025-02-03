// CSC 134
// M2T1 - Lemonade Stand
// gaines
// 1/27/2025
// Today we're selling leomonade

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  // setup
  string store_name = "Jaydens italian grill";
  string food_name  = "chicken pasta";
  double food_price = 12.34; // $

  // our receipt variables 
  double subtotal, total;
  double tax_percent, tax_cost;

  // Do the order 
  cout << "Welcome to the " << store_name << " store!" << endl;
  cout << "You ordered one " << food_name << " and it's $" << food_price << endl;
  cout << endl;

  // Calculate subtotal, tax, total
  tax_percent = 0.09; // assignment says 9%, so 9/100 (as a double)
  subtotal = food_price; 
  tax_cost = subtotal * tax_percent ; // 9% of $12.34
  total    = subtotal * tax_cost;
   // Pring the reciept 
   cout << setprecision(2) << fixed; // magic to turn on 2 decimals 
   cout << "subtotal: $" << subtotal << endl;
   cout << "tax (9%):\t$" <<tax_cost <<endl;
   cout << "total:\t$" << total << endl;

   cout << "Have an amazing day :)!" <<endl;
}