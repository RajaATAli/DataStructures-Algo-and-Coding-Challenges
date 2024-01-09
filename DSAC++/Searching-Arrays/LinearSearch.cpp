#include <iostream>
using namespace std;

// Implement linearSearch function here

int linearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++){
        if (arr[i] == key){
            return i; // Returns the index
        }
    }
    return -1;
}


int main(){
    int n;
    cout << "Enter how many elements you want in your array (array size) = ";
    cin >> n;
    int array[n];
    
    cout << "Now enter each of these elements" << endl;
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    
    // Linear Search Time
    int key;
    cout << "Enter the element you want to search = ";
    cin >> key;
    
    int result;
    result = linearSearch(array, n, key);
    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << result << endl;
    }
    
    return 0;
    
}