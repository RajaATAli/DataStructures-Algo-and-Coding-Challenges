// Mark Allen Weiss, Data structures and algorithm analysis in C++, 4th edition, Pearson, Addison Wesley
// Q 1.5
// Write a recursive function that returns the number of 1 in the binary representation of N. 
// Use the fact that this is equal to the number of 1 in the representation of N/2, plus 1, if N is odd.

#include <iostream>
using namespace std;

int BinaryNum(int N){
  // Base Case
  if (N == 0){
    return N;
  }
  if (N%2 == 0){
    int num = BinaryNum(N/2);
    return num;
  }
  else {
    int num = BinaryNum(N/2) + 1;
    return num;
  }
}


// Book solution

int ones( int n )
{
if( n < 2 )
return n;
return n % 2 + ones( n / 2 );
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Number of 1s in the binary representation of " << number << ": " << BinaryNum(number) << endl;
    cout << "Number of 1s in the binary representation of " << number << " (using ones): " << ones(number) << endl;


    return 0;
}