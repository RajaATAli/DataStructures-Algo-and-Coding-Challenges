#include<iostream>
using namespace std;

int main(){

  int a; //decleration
  a = 12; //initialization
  cout<<"Size of int "<<sizeof(a)<<endl;

  float b;
  cout<<"Size of float "<<sizeof(b)<<endl;

  char c;
  cout<<"Size of char "<<sizeof(c)<<endl;

  bool d;
  cout<<"Size of bool "<<sizeof(d)<<endl;

  short int si;
  long int li;
  cout<<"Size of short int "<<sizeof(si)<<endl;
  cout<<"Size of long int "<<sizeof(li)<<endl;

  return 0;
}