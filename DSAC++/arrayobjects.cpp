#include <iostream>
using namespace std;

class student {
  public:
  string name;
  int age;
  bool gender;

  void printInfo(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender" << gender << endl;
  }
};

int main(){
  /* You could repeat the following for multiple students:
  student a;
  a.name = ..
  a.age = ..
  a.gender = ..

  student b ...

  We'll just do it more efficiently using an array of object
  */
 student arr [3]; // Array for student data types
 for (int i = 0; i < 3; i++){

  cin >> arr[i].name;
  cin >> arr[i].age;
  cin >> arr[i].gender;
 }

 for (int i = 0; i < 3; i++){
   arr[i].printInfo();
 }
  return 0;

}