// Half Pyramid with 180 deg rotation
// We will have to add some sort of space as they are being printed towards the left

#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++){
    for (int x = 1; x <= n; x++){
      if (x <= n-i){
        cout << " ";
      }
      else{
        cout << "*";
      }
    }
    cout << endl;
  }
  return 0;
}