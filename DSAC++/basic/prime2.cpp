// Check if a number is prime or not

#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int n;
  cin >> n;
  bool flag;
  flag = 0;
  for (int i = 2; i<sqrt(n); i++){
    if (n%i == 0){
      cout << "Not a Prime" << endl;
      flag = 1;
      break;
    }
  }
  if (flag == 0){
    cout << "Prime Number" << endl;
  }
  return 0;
}