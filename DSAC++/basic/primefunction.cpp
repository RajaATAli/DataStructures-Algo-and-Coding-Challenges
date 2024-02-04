// Print all prime numbers between a and b, but this time use functions
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
  for (int x = 2; x<=sqrt(n); x++){
    if (n%x==0){
      return false;
    }
  }
  return true;
}

int main(){

  int a,b;
  cin >> a >> b;

  for (int i = a; i<=b; i++){
    if (isPrime(i)){
      cout << i << endl;
    }
  }
  return 0;
}