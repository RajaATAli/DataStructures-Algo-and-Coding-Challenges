// Sum of first n natural numbers
#include<iostream>
using namespace std;

int sum(int n){
  int ans;
  ans = 0;

  for (int i = 1; i <= n; i++){
    ans += i;
  }
  return ans;
}

int main(){
  int num;
  cin >> num;
  cout << sum(num) << endl;
  return 0;
}