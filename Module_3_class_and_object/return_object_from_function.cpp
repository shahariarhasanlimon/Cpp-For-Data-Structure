// 3-5 Return Object from Function
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int age;
    char grade;
};
Student createStudent(string n, int a, char g) {
    Student s;
    s.name = n;
    s.age = a;
    s.grade = g;
    return s;
}
int main()
{
    Student s1 = createStudent("John", 20, 'A');
    Student s2 = createStudent("Alice", 22, 'B');       
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Grade: " << s1.grade << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Age: " << s2.age << endl;
    cout << "Grade: " << s2.grade << endl;
    return 0;
}