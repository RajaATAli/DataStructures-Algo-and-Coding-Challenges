#include <iostream>
#include <algorithm>

using namespace std;


int BinarySearch(int arr[], int size, int key){
  int startindex = 0;
  int endindex = size - 1; 

  while (startindex <= endindex){
    int midpointindex = (startindex + endindex) / 2;
    if (arr[midpointindex] == key){
      return midpointindex;
    }
    else if (arr[midpointindex] < key)
    {
      startindex = midpointindex + 1;
    }
    else if (arr[midpointindex] > key) {
      endindex = midpointindex - 1;
    }
  }
  return -1;
    
}


int main()
{
    int n;
    cout << "Enter how many elements you want in your array (array size) = ";
    cin >> n;
    int array[n];
    
    cout << "Now enter each of these elements" << endl;
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    
    // Binary Search Time
    sort(array, array+n);
    
    int key;
    cout << "Enter the element you want to search = ";
    cin >> key;
    
    int result;
    result = BinarySearch(array, n, key);
    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << result << endl;
    }
    
    return 0;
    
}