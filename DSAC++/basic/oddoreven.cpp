// C++ Program to find if a number is odd or even
#include<iostream>

using namespace std;

int main(){
  int number;
  cout << "Enter the desired number" << endl;
  cin >> number;

  if (number%2 == 0){
    cout << "The number you entered is even" << endl;
  } 
  else{
    cout << "The number you entered is odd" << endl;
  }

  return 0;

}