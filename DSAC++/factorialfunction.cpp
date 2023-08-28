// Factorial of a number n using functions

#include<iostream>
using namespace std;


int factorial(int x){
  int num = 1;
  for (int i = 1; i <= x; i++){
    num *= i;
  }
  return num;
}

int main(){
  int n;
  cin >> n;
  
  int result = factorial(n);
  cout << result << endl;

  return 0;
}