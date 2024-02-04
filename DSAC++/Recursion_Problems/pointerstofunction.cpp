// Passing pointers to functions

#include <iostream>
using namespace std;

void increment(int *a){ 
  (*a)++; 
}

int main(){
  int a = 2;
  increment(&a); // We are passing the address of a to the function increment
  cout << a << endl; // 3
  // The value of a is changed because the address of a is passed to the function increment
  // The function increment dereferences the pointer and increments the value of a
  // The original value of a is changed
  return 0;
}



/*

This is an incorrect implementation for understanding purposes

#include <iostream>
using namespace std;

void increment(int a){ // The a here is a different variable from the a in main - local variable
  a++; // The local variable a is incremented but the value of a in main is not changed
}


int main(){
  int a = 2; // The a here is a different variable from the a in increment function
  increment(a); // We are passing the value of a to the function increment and not the address of a (pass by value)
  cout << a << endl; // 2
  // The value of a is not changed because the value of a is passed to the function increment
  // The function increment creates a copy of the value of a and increments it
  // The original value of a is not changed
  // To change the value of a, we need to pass the address of a to the function increment
  // This is done using pointers
  return 0;
}

*/