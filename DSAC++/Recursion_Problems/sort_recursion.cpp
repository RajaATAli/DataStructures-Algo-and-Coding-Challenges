// Check if an array is sorted using recursion
#include <iostream>
using namespace std;

bool sorted(int arr[], int n){
  // Base Case
  // * If there is only one element in the array, then it is sorted
  if (n == 1){
    return true;
  }

  // Recursive Case
  // Each recursive call should deal with a smaller part of the array than the previous call

  if (arr[0] < arr[1] && sorted(arr + 1, n - 1)){
    return true;
  }
  return false;
}

int main(){
  int n;
  cout << "Enter the size of the array = ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of the array" << endl;
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout << "The array is sorted = " << sorted(arr, n);
  return 0;
}