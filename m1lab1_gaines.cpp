// CSC 134
// M1LAB1 - Lemonade Stand
// gaines
// 1/27/2025
// Today we're selling leomonade

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare your variables (boxes to holdl data)
    string name = "Goat";               // string hold words, sentences, names, ... 
    int num_CupsOfLemonade = 55;       // int are whole numbers (no decimal)
    double price_each = 0.30;          // aany number with a decimal is a double 

// Say hi
cout <<"Welcome to the " << name << " lemonade stand." <<endl;
cout << "we have " << num_CupsOfLemonade << " Cups Of Lemonade on stand." << endl;
cout << "Price per Cup Of Lemonade is: $" << price_each << endl;
cout << endl;

// Calculate total
double total_cost = num_CupsOfLemonade * price_each;

// print answer 
cout << fixed << setprecision(2); // this makes it print 25:00 instead of 25 
cout << "The total for all " << num_CupsOfLemonade << " is $" << total_cost << endl;

return 0; // no errors

}