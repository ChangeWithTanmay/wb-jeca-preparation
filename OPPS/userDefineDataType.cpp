#include <iostream>
using namespace std;


class Student{ // Student is a new data type
public:
    string name;
    int rno;
    float gpa;
    // int age;
};

int main(){

    Student s; // S is ??
    s.name = "Tanmay";
    s.rno = 57;
    s.gpa = 8.15;
    // s.age = 21;

    Student s1;
    s1.name = "Rahul";
    s1.rno = 57;
    s1.gpa = 8.15;

    cout << s1.name << " " << s1.gpa << " " << s1.rno << endl;
    cout << s.name << " " << s.gpa << " " << s.rno << endl;
}