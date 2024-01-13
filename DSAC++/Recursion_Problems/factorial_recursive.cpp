#include <iostream>
using namespace std;

// Recursive Program for Factorials
int Factorial(int num){
  
  // Base Case
  // * Factorial of a number is the product of all positive integers less than or equal to `n`
  if (num == 0){
    return 1;
  }

  // Recursive Case
  int prevFact = num * Factorial(num-1);
  return prevFact;
}

int main(){
  int n;
  cout << "Enter the number you want to calculate the factorial for = ";
  cin >> n;
  cout << "This is the factorial of the number = " << Factorial(n);
}