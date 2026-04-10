// 2-6 Return Dynamic Array from Function
#include <bits/stdc++.h>
using namespace std;
int* createArray(int size) {
    int* arr = new int[size]; // Dynamically allocate memory for an array of size 'size'
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    return arr; // Return the pointer to the dynamically allocated array
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int* myArray = createArray(n); // Call the function to create the array 
    cout << "Elements in the array: ";
    for (int i = 0; i < n; i++) {
        cout << myArray[i] << " "; // Print the elements of the array
    }
    cout << endl;
    delete[] myArray; // Deallocate the dynamic memory
    return 0;
}
