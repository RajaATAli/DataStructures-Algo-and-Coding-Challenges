//Reverse a given number n: 1234 -> 4321
#include<iostream>
using namespace std;

int main(){

  int n;
  cin >> n;

  int reverse = 0;

  while (n > 0){
    int last = n % 10; // This extracts the last digit
    reverse = reverse*10 + last; // This adds the last digit to the reverse number (0 * 10 + 4)
    // On subsequent iterations, this above step effectively shifts the digits in reverse to the left and adds the new digit at the rightmost position.
    n = n/10; // This removes the last digit from n
  }
  cout << reverse << endl;
  return 0;
}
