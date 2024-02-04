#include <iostream>
using namespace std;

class student {
  string name; // Private by default
  public:
  int age;
  bool gender;

  // To access private members, we need to use public functions
  // Getters and setters
  void setName(string s){
    name = s;
  }
  void getName(){
    cout << name; // We can't access name directly, so we use a getter
  }

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
  string name;
  cin >> name; 
  arr[i].setName(name); // We can't access name directly, so we use a setter
  cin >> arr[i].age;
  cin >> arr[i].gender;
 }

 for (int i = 0; i < 3; i++){
   arr[i].printInfo();
 }
  return 0;

}