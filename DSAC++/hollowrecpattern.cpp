//Hollow rectangle pattern question
//there will stars in all the columns in the first and last row
//In not the first and last row, there will be stars only on the first and last column

#include<iostream>
using namespace std;

int main(){
  int row,column;
  cin >> row >> column;

  for (int r = 1; r <= row; r++){
    for (int c = 1; c <= column; c++){
      if (r == 1 || r == row || c == 1 || c == column){
        cout << "*";
      }
      else {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}