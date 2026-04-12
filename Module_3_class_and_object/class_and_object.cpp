// 3-3 Create Class and Object

#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int age;
    char grade;
};

int main()
{
    Student s1;
    s1.name = "John";
    s1.age = 20;
    s1.grade = 'A';
    Student s2;
    s2.name = "Alice";
    s2.age = 22;
    s2.grade = 'B';

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Grade: " << s1.grade << endl;

    cout << "Name: " << s2.name << endl;
    cout << "Age: " << s2.age << endl;
    cout << "Grade: " << s2.grade << endl;

    return 0;
}