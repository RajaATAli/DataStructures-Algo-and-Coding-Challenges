#include <iostream>
using namespace std;

int main(){
  int a = 10;
  int *aptr = &a;
  cout << aptr << endl;

  aptr++;
  cout << aptr << endl;
  cout << *aptr << endl; // garbage value because it is pointing to the next memory location after a
  return 0;
}