// Inverted Half Pyramid Pattern Question

#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++){
    for (int z = n; z >= i; z--){
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}