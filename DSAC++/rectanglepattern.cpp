// Rectangle pattern question - number of rows and columns
#include<iostream>
using namespace std;

int main(){
  int row,column;
  cout << "Enter the rows and columns = " << endl;
  cin >> row >> column;

  for (int r=0; r<row;r++){
    for (int c=0;c<column;c++){
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}