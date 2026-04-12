// Constructor in C++
#include <bits/stdc++.h>
using namespace std;
class Student {
public: 
    string name;
    int age;
    char grade;

    // Constructor
    Student(string n, int a, char g) {
        name = n;
        age = a;
        grade = g;
    }
};
int main() {
    Student s1("John", 20, 'A');
    Student s2("Alice", 22, 'B');   
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Grade: " << s1.grade << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Age: " << s2.age << endl;
    cout << "Grade: " << s2.grade << endl;
    return 0;
}