// 3-6 Dynamic Object in C++
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int age;
    char grade; 

    Student(int a, char g) {
        name = "";
        age = a;
        grade = g;
    }
};
int main()
{
    // Dynamic Object Creation
    
    // Student* s1 = new Student(20, 'A');
    // s1->name = "John";
    // s1->age = 20;
    // s1->grade = 'A';    
    // Student* s2 = new Student(22, 'B');
    // s2->name = "Alice";
    // s2->age = 22;
    // s2->grade = 'B';    
    // cout << "Name: " << s1->name << endl;
    // cout << "Age: " << s1->age << endl;
    // cout << "Grade: " << s1->grade << endl;
    // cout << "Name: " << s2->name << endl;
    // cout << "Age: " << s2->age << endl;
    // cout << "Grade: " << s2->grade << endl;
    // delete s1;
    // delete s2;
    // return 0;


    // 3-7 Access Values of Dynamic Object
    Student* s1 = new Student(20, 'A');
    s1->name = "John";
    Student* s2 = new Student(22, 'B');
    s2->name = "Alice";
    cout << "Name: " << s1->name << endl;
    cout << "Age: " << s1->age << endl;
    cout << "Grade: " << s1->grade << endl;
    cout << "Name: " << s2->name << endl;
    cout << "Age: " << s2->age << endl;
    cout << "Grade: " << s2->grade << endl;
    delete s1;
    delete s2;
    return 0;   
    

}
