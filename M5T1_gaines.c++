
#include <iostream>

using namespace std;

4 // CSC 134
5 // M5T1 - Intro to Functions
6 // Gaines
7 // 3/18/24
8
9 // Goal -
10 // Create one void function,
11 // and one value returning function
12
13 // Function Prototypes (declarations)
14 void say_hello();
15 int give_the_answer();
16 int double_a_number(int num);
17
18 // Function Definitions
19 int main()
20 {
21 cout << "Hello from main()" << endl;
22 say_hello();
23 int my_answer = give_the_answer();
24 cout << "The answer is: " << my_answer << endl;
25 // now double the answer
26 int twotimes = double_a_number(7);
27 cout << "Here's another number: " << twotimes << endl;
28 return 0;
29 }
30 void say_hello() {
31 cout << "Hi from say_hello() " << endl;
32 return;
33 }
34 int give_the_answer() {
35 return 42;
36 }
37 int double_a_number(int num) {
38 int new_num = num * 2;
39 return new_num;
