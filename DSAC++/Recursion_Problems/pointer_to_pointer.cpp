#include <iostream>
using namespace std;

int main(){
  int a = 10;
  int *p;
  p = &a;

  cout << "Value of a after dereferencing p: " << *p << endl; // 10

  int **q;
  q = &p; 
  // q = &&a; // This is not allowed in C++
  // What we are doing above is that we are taking the address of the pointer p and storing it in the pointer q

  cout << "Value of q after dereferencing q: " << *q << endl; // Address of p
  cout << "Value of a after dereferencing q: " << **q << endl; // 10


}