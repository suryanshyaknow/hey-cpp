#include <iostream>
using namespace std;

// ######################### RECURSION ###############################
/*
Recursion ain't always good. By calling a function repeatedly, it might increase the overhead.

Overhead refers to the additional computational resources, such as time and memory, that are
required to perform a certain task beyond what is strictly necessary.
*/

// Factorial w/o Recursion
long long int getFactorial(int n)
{
    long long int factorial = 1;

    for (int i = n; i > 0; i--)
    {
        factorial *= i;
    }
    return factorial;
}

// Factorial w/ Recursion
long long int getFactorialByRecursion(long long int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    return num * getFactorialByRecursion(num - 1);
}

// Fibonacci series w/o Recursion
void displayFibonacci(int n)
{
    int a = 0, b = 1, idx = 0;
    cout << "Fibonacci series upto " << n << " terms is about to be displayed..." << endl;
    while (idx < n)
    {
        cout << a << "\t";
        // a, b = b, a+b;
        // b = a+b;
        // a = b-a;
        int temp = b;
        b = a + b;
        a = temp;

        idx++;
    }
}

int get_nth_fibonacci_term(int nth)
{
    if (nth == 0 || nth == 1)
    {
        return nth;
    }
    return get_nth_fibonacci_term(nth - 2) + get_nth_fibonacci_term(nth - 1);
}

void displayFibonacciViaRecursion(int n)
{
    cout << "\nFibonacci series upto " << n << " terms is about to be displayed via `Recursion`..." << endl;

    int idx = 0;
    while (idx < n)
    {
        cout << get_nth_fibonacci_term(idx) << "\t";
        idx++;
    }
}

int main()
{
    int num1 = 20, num2 = 1, num3 = 0;
    cout << "getFactorial(20) = " << getFactorial(num1) << endl;
    cout << "getFactorial(1) = " << getFactorial(num2) << endl;
    cout << "getFactorial(0) = " << getFactorial(num3) << endl;

    cout << "\ngetFactorialByRecursion(20) = " << getFactorial(num1) << endl;
    cout << "getFactorialByRecursion(1) = " << getFactorial(num2) << endl;
    cout << "getFactorialByRecursion(0) = " << getFactorial(num3) << endl;

    // displayFibonacci(10);
    cout << get_nth_fibonacci_term(20);
    displayFibonacciViaRecursion(20);
    
    return 0;
}