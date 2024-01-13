#include <iostream>
using namespace std;

int power(int n, int p){
    if (p == 0){
        return 1;
    }
    int prevPower = power(n, p-1); // This is the recursive call where we reduce the exponent by 1 in each call
    return n * prevPower;
}

int main(){
    int n, p;
    cout << "Enter the number you want to find the power of = ";
    cin >> n;
    cout << "Enter the power you want to raise it to = ";
    cin >> p;
    cout << "The value of " << n << " raised to the power " << p << " is = " << power(n, p) << endl;
    return 0;
}