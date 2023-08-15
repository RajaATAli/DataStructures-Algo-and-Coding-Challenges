//Fibonacci Sequence using a while loop in C++

#include<iostream>
using namespace std;

int main(){

  cout << "Enter the Number = ";
  int n;
  cin >> n;

  int x = 0;
  int y = 1;
  int first;

  while (n>0){
    cout << x << endl;
    first = x + y;

    x = y;
    y = first;

    n--;
  }
  return 0;
}