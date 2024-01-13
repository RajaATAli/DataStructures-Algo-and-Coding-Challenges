#include <iostream>
using namespace std;

// Recursive Sum

int Sum(int n){
    if (n == 0){ // This is the base case to stop further recursion
        return 0;
    }
    int prevSum = Sum(n-1);
    return n + prevSum;
}

int main(){
    int n;
    cout << "Enter the number you want to find the sum of = ";
    cin >> n;
    cout << "The sum of the first " << n << " natural numbers is = " << Sum(n) << endl;
    return 0;
}