// CSC 134
// M5T2
// gaines
// 3/24/2025

// TODO:
// add declarations
#include <iostream>
int find_square(int number);
void print_line(int number, int square); 
// finish the functions
// write main()

int main() {
   // Example: print squares from 1 to 10 
   for (int num=1; num <=10; num++) {
    int square = find_square(num); // should call find_square()
    print_line(num, square);
      }
    }

int find_square(int number) {
    int square = number * number; 
    return square;
}

void print_line(int number, int square) {
    // looks like:
    // 3 9

}
