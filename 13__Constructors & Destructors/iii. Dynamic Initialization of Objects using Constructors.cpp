#include <iostream>
using namespace std;

// ##################### Dynamic Initialization of Objects using Constructors #########################
/*
* Dynamic initialization of objects using constructors is the process of creating an object in memory and
  initializing its data members using a constructor at runtime.

  In layman's terms, it means creating objects on the heap (using `new` operator) and providing arguments
  to the constructor of the class at the same time.

* This is useful when we don't know the exact values that an object should be initialized with at compile-time
  or when the values may change during runtime.

  For example, let's say we have a program that reads input from a file and creates objects based on that input.
  Using dynamic initialization, we can create those objects and initialize them with the input values as they
  are read from the file.

* Now, the compiler's gotta figure out on its own to which constructor to execute.
*/

class BankDeposit
{
  int principal;
  int years;
  float interestRate;
  float returnVal;

public:
  BankDeposit();
  BankDeposit(int p, int y, float r);                               // Takes `interestRate` in fractions
  BankDeposit(int p, int y, int r);                                 // Takes `interestRate` in integers
  friend ostream &operator<<(ostream &out, const BankDeposit &dep); // Overloading the 'stream insertion' operator
};

BankDeposit::BankDeposit()
{
  interestRate = 0.07; // default interest rate
  // interestRate = float(7)/100; // default interest rate

  cout << "Enter the principal amount you'd wanna deposit for " << interestRate << "\% interest rate: ";
  cin >> principal;

  cout << "Enter the number of years you'd wanna withdrawal it after: ";
  cin >> years;

  returnVal = principal;

  for (int idx = 0; idx < years; idx++)
  {
    returnVal *= (1 + interestRate);
  }
}

BankDeposit::BankDeposit(int p, int y, float r)
{
  principal = p;
  years = y;
  interestRate = r;
  returnVal = principal;

  for (int idx = 0; idx < y; idx++)
  {
    returnVal *= (1 + interestRate);
  }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
  principal = p;
  years = y;
  interestRate = float(r) / 100;
  returnVal = principal;

  for (int idx = 0; idx < y; idx++)
  {
    returnVal *= (1 + interestRate);
  }
}

// defining overloaded 'stream insertion' function
ostream &operator<<(ostream &out, const BankDeposit &dep)
{
  out << "After " << dep.years << " years,  you'll get $" << dep.returnVal << " in accordance to the said interest rate." << endl;
  return out;
}

int main()
{
  BankDeposit *depPtr1 = new BankDeposit();
  cout << *depPtr1; // We're gonna get garbage values here!

  BankDeposit *depPtr2 = new BankDeposit(900, 5, 0.05f); // or compiler will treat "0.05" as double by default!
  cout << *depPtr2;

  BankDeposit *depPtr3 = new BankDeposit(900, 5, 5);
  cout << *depPtr3;

  delete depPtr1;
  delete depPtr2;
  delete depPtr3;

  return 0;
}