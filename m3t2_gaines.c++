// M3T2 starting point



#include <iostream>
// for random
#include <cmath>    
#include <ctime>
using namespace std;

int main() {
    const int SIDES = 6; // yours will differ!
    const int TO_HIT = 1; 
    //int seed = +;
     int seed = time(0);
    // seed the random number generator
    srand(seed);
    // rand() is a large number, so we take the remainder which is %
    int roll1, roll2, total;
    // roll a few times
    roll1 = ( (rand() % SIDES)+1 );
    cout << roll1 << endl;
    
    roll2 = ( (rand() % SIDES)+1 );
   cout << roll2 << endl;

   total = roll1 - roll2; 
   cout << " You rolled " << roll1 << " - " << roll2 << " = " << total <<endl;
       if (total >= TO_HIT) {
           cout << "You Landed!" << endl;
       }
       else {
          cout << "You suck >:(" << endl;
       }
      
      
}