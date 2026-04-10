// String Input and Output in C++
#include <bits/stdc++.h>
using namespace std;
int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name); // Read a line of input into the string variable 'name'
    cout << "Hello, " << name << "!" << endl; // Output the name
    return 0;
}