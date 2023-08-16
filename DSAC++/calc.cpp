#include<iostream>
using namespace std;

int main(){
  cout << "1.Add \n 2.Subtract \n 3.Divide";
  int choice;
  cin >> choice;
  int a, b;
  cout << "Enter the two numbers = ";
  cin >> a >> b; 

  switch (choice){
    case 1:
    cout << a + b << endl;
    break;

    case 2: 
    cout << a - b << endl;
    break;

    case 3: 
    cout << a / b << endl;
    break;
  }
  return 0;
}