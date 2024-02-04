#include <iostream>
using namespace std;

class student {
private:
    string name;

public:
    int age;
    bool gender;

    // Default constructor - A constructor with no parameters
    student() {
        cout << "Default constructor" << endl;
    }

    // Constructor
    // This is a parameterized constructor with default values
    student(string n, int a, bool g){
      cout << "Parameterized constructor" << endl;
      name = n;
      age = a;
      gender = g;
    }

    // Copy constructor - Deep copy and shallow copy (see notes)
    // This is an example of deep copy
    student(const student &a) {
      cout << "Copy constructor" << endl;
      name = a.name;
      age = a.age;
      gender = a.gender;
    }

    // Destructor
    ~student() {
        cout << "Destructor called" << endl;
    }

    // Getters and setters
    void setName(string s) {
        name = s;
    }

    string getName() const {
        return name;
    }

    void printInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }

    // Operator overloading
    bool operator == (student &a){
      if(name==a.name && age==a.age && gender==a.gender){
        return true;
      }
    }
};

int main() {
    student a("Raja", 20, 1);
    // a.printInfo();
    student b;
    // b.printInfo();
    // Copy constructor
    student c = a; 
    //c.printInfo();

    if (c == a) { // This is not possible without operator overloading  
        cout << "Same" << endl;
    } else {
        cout << "Not same" << endl;
    }

    return 0;
}
