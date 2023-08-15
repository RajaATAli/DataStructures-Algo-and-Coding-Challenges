//Calculating sum of an array using a for loop
#include<iostream>
using namespace std;

int main(){
  int arr[] = {1,3,64,34};
  int sum = 0;
  int n = sizeof(arr)/sizeof(arr[0]);

  for (int i = 0; i < n; i++){
    sum += arr[i];
  }

  cout << "This is the sum of the array = " << sum << endl;

  return 0;
}