#include <iostream>
using namespace std;


void printFibonacciSeries(int);  // function prototyping

int main() {

    // ######################### LOOPS (Iteration Statements) ###############################
    /* Used to repeat a block of code until a certain condition is met.
    
    i.   while loop
    ii.  do-while loop
    iii. FOR LOOP
    iv.  range-based for loop
    */

    // ################################### FOR LOOP #########################################
    /*
    Write a program that takes a positive integer n as input and prints the first n terms of the Fibonacci sequence. The Fibonacci sequence is a sequence of numbers where each number is the sum of the two preceding ones, starting from 0 and 1. The first 10 terms of the sequence are:

    0, 1, 1, 2, 3, 5, 8, 13, 21, 34

    Your program should use a for loop to compute and print the first n terms of the Fibonacci sequence.
    */

    printFibonacciSeries(15);

    return 0;
}

void printFibonacciSeries(int n) {

    int a = 0, b = 1;    
    cout << "Printing the first " << n << " terms of the Fibonacci Series: " << endl;
    
    if (n==0 && n==1) {
        cout << n;
        return;
    }
    else if (n<0) {
        cout << "Incorrect input for number of terms to be displayed!" << endl;
        return;
    }
    
    for(int i=0; i<n; i++) {
        cout << a << "\t";
        int temp = a+b;
        a = b;
        b = temp;
        // b = a+b;
        // a = b-a;
    }
}


