// Stack and Heap Memory
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Stack memory example
    int a = 10; // 'a' is stored in stack memory
    cout << "Value of a: " << a << endl;

    // Heap memory example
    int* ptr = new int; // Dynamically allocate memory on the heap
    *ptr = 20; // Assign value to the allocated memory
    cout << "Value pointed to by ptr: " << *ptr << endl;

    delete ptr; // Deallocate the heap memory
    return 0;
}