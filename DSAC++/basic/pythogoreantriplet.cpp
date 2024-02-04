//Check whether a triplet is a pythogorean triplet or not
#include<iostream>
//#include<math.h>
#include<algorithm>
using namespace std;
// a^2 = b^2 + c^2
// a here is the maximum
bool triplet(int x, int y, int z){
  // finding maximum of the triplets and assigning it to a
  int a = max(x, max(y,z));
  int b,c;
  if (a == x){
    b = y;
    c = z;
  }
  else if (a == y){
    b = x;
    c = z;
  }
  else{
    b = x;
    c = y;
  }
  if (a*a == b*b + c*c){
    return true;
  }
  else{
    return false;
  }
}
int main(){
  int x,y,z;
  cin >> x >> y >> z;
  if (triplet(x,y,z)){
    cout << "It is a triplet";
  }
  else{
    cout << "Not a triplet";
  }
  return 0;
}