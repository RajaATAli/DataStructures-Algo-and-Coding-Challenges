//Printing n terms of fibonacci sequence but using functions

#include<iostream>
using namespace std;

void fib(int x){
  int y = 0;
  int z = 1;
  int num;
  for (int i = 0; i<x; i++){
    cout << y << endl;
    num = y + z;
    y = z;
    z = num;
  }
  return;
}
int main(){
  int n;
  cin >> n;

  fib (n);

  return 0;
}