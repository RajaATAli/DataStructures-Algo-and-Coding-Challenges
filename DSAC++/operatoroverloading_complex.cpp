#include<bits/stdc++.h>
using namespace std;

class complex {
  int real;
  int img;
  public:
  complex(int r, int i){
    real = r;
    img = i;
  }

  complex operator + (complex const &obj){
    complex res;
    res.real = real + obj.real;
    res.img = img + obj.img;
  }
};

int main(){
  complex c1(12,7), c2(6,7);
  complex c3 = c1 + c2;
  cout << c3.real << " + i" << c3.img;
  return 0;
}