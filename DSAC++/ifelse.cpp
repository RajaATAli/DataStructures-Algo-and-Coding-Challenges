//Find the maximum of three given numbers

#include<iostream>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;

  if (a>b){
    if (a>c){
      cout << "This is the maximum number : " << a << endl;
    } else{
      cout << "This is the maximum number : " << c << endl;
    }
  } else if (b>c){
    cout << "This is the maximum number : " << b << endl;
  } else {
    cout << "This is the maximum number : " << c <<endl;
  }

  return 0;
}