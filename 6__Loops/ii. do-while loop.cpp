# include <iostream>
using namespace std;


void sum_positive_nums();  // function prototyping

int main() {

    // ######################### LOOPS (Iteration Statements) ###############################
    /* Used to repeat a block of code until a certain condition is met.
    
    i.   while loop
    ii.  DO-WHILE LOOP
    iii. for loop
    iv.  range-based for loop
    */

    // ################################ DO-WHILE LOOP #######################################
    /*
    Problem Statement: WAP to keep taking input of numbers from the user until the user enters a negative number. 
    After the user enters a negative number, display the sum of all the positive numbers entered by the user.
    */

    sum_positive_nums();

    return 0;
}

void sum_positive_nums() {

    int num;
    int sum = 0;
    do {
        cout << "Enter a positive number (enter a negative number to quit): ";
        cin >> num;
        cout << endl;
        
        if (num < 0) {
            cout << "\nThe sum of all inputted positive numbers is: " << sum;
            return;
        }
        sum += num;
    } while (num >= 0);
}
