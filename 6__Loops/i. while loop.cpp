# include <iostream>
using namespace std;


int single_digit_sum(int);  // function prototyping

int main() {

    // ######################### LOOPS (Iteration Statements) ###############################
    /* Used to repeat a block of code until a certain condition is met.
    
    i.   WHILE LOOP
    ii.  do-while loop
    iii. for loop
    iv.  range-based for loop
    */

    // ################################# WHILE LOOP #########################################
    /*
    Problem Statement: WAP that takes an integer as input and keeps adding the digits of the number 
    until a single-digit number is obtained. Display the single-digit number as output.

    For example, if the input is 1234, the program should add 1 + 2 + 3 + 4 = 10, 
    and then add 1 + 0 = 1, so the output should be 1.
    */

    int num = 1976;
    cout << single_digit_sum(num) << endl;

    return 0;
}

int single_digit_sum(int num) {

    int sum = 0;
    while (num > 0 || sum > 9) {
        
        if (num == 0) {
            num = sum;
            sum = 0;
        }
        sum += num%10;
        num /= 10; 
    }
    return sum;
}
