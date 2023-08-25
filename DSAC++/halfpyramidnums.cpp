//Half pyramid using numbers
#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++){
    for (int x = 1; x <= i; x++){
      cout << i;
    }
    cout << endl;
  }

  return 0;
}