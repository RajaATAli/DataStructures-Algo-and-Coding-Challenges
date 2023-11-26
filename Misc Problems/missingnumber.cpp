/*You are given an array of n integers ranging from 1 to n+1. This array is supposed to contain all numbers from 1 to n+1, but one number is missing, and one number appears twice. Your task is to find both the missing number and the repeated number.

Example:

input: [3, 1, 2, 5, 3]
Output: Missing Number = 4, Repeated Number = 3
*/

#include <iostream>
#include <unordered_map> // Hashmap to keep track of elements and their frequencies easily
using namespace std;

int main(){
	int array[5] = {3, 1, 2, 5, 3}; // Repeated number = 3; Missing Number 4
	int n = sizeof(array)/sizeof(array[0]);
	
	unordered_map<int, int> frequencyMap;
	// Key -> Integer of Array
	// Value -> Frequency of that integer in the array
	
	for (int i = 0; i < n; i++) {
		frequencyMap[array[i]]++; // Increment the count of the current element in the frequency map
		// If the current element is not there, add to it		
	}

	int repeated;
	int missing;

	// Find the repeated number
	for (int i = 0; i < n; i++) {
    		if (frequencyMap[array[i]] > 1) {
        		repeated = array[i];
        		break;
    		}
	}

	// Find the missing number
	for (int i = 1; i <= n + 1; i++) {
    		if (frequencyMap.find(i) == frequencyMap.end()) { // Searches for key in the map - iterator that points to the theoretical element that follows the last element i
        		missing = i;
        		break;
    		}
	}	
	cout << "Repeated number, " << repeated << endl;
	cout << "Missing number, " << missing << endl;
	
	return 0;
}



