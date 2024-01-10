// Find the minimum element in unsorted array and swap it with element at beginning
#include <iostream>
using namespace std;

// void SelectionSort




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
    
    // Selection Sort Time
    SelectionSort(array);
    cout << "This is your sorted array using Selection Sort = " << endl; 
    
    return 0;
    
}