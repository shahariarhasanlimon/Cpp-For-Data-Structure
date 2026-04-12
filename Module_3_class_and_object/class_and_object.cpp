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

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Grade: " << s1.grade << endl;

    return 0;
}