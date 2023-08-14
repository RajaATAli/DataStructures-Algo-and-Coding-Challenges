//Program to check if an alphabet is a constant or vowel
#include<iostream>
using namespace std;

int main(){

  char a;
  cout << "Enter the alphabet = ";
  cin >> a;

  if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
    cout << "The alphabet is a vowel";
  }
  else {
    cout << "The alphabet is not a vowel";
  }
  return 0;
}