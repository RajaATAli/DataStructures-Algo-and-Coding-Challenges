// Print nth Fibonacci numbers using Recursion
#include <iostream>
using namespace std;

int fib(int num){

  // base case
  if (num == 0 || num == 1){
    return num;
  }

  // recursive case
  int term = fib(num-1) + fib(num-2);
  return term;
}


int main(){
  int n;
  cout << "Enter the number you want to find the Fibonacci number for = ";
  cin >> n;
  cout << "The Fibonacci number for " << n << " is = " << fib(n) << endl;
  return 0;
}