#include <iostream>
using namespace std;

int main(){
  int arr [] = { 10, 20, 30, 40, 50 };
  cout << *arr << endl; // 10 - prints the first element of the array
  // The name of the array is a pointer to the first element of the array

  int *ptr = arr; // Initialize a pointer to the address of the first element of the array
  // Using &arr is an expression that returns the address of the entire array (not the first element)

  // Loop through the array using pointer arithmetic
  for (int i = 0; i < 5; i++){
    cout << *ptr << " ";
    cout << *(arr + i) << " "; // This is equivalent to the above line
    // arr is an indexing pointer, so arr + 1 will point to the next element of the array (index and not memory location)
    ptr++; // Increment the pointer to point to the next element of the array
    // arr ++; // This will give an error because the name of the array is a constant pointer
  }
}