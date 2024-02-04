// Swapping two numbers using pass by reference

#include <iostream>
using namespace std;


void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int a = 2;
  int b = 4;

  // We are passing the address of the variables a and b to the function swap
  int *aptr = &a;
  int *bptr = &b;
  
  swap(aptr, bptr); // The function expects pointers as arguments
  cout << "a: " << a << " b: " << b << endl;
}
/*
This is an incorrect implementation of swapping two numbers using pointers. The correct implementation is as follows:

// Swapping two numbers using pass by reference

#include <iostream>
using namespace std;


void swap(int a, int b){
  int temp = a;
  a = b;
  b = temp;
}

int main(){
  int a = 2;
  int b = 4;
  
  swap(a, b); // This is not correct because the function swap is expecting the address of the variables a and b and not the values of a and b (we are passing by value and not by reference)
  cout << "a: "

*/