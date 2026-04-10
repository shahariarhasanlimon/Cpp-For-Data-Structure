// 2-4 Increase Size using Dynamic Array
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the initial number of elements: ";
    cin >> n;
    int* arr = new int[n]; // Dynamically allocate memory for an array of size n
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Now we want to increase the size of the array
    int newSize;
    cout << "Enter the new size of the array: ";
    cin >> newSize;

    // Create a new array with the new size
    int* newArr = new int[newSize];

    // Copy the old elements to the new array
    for (int i = 0; i < n; i++) {
        newArr[i] = arr[i];
    }

    // Delete the old array
    delete[] arr;

    // Point arr to the new array
    arr = newArr;

    // Now we can add more elements to the array
    cout << "Enter " << (newSize - n) << " more elements: ";
    for (int i = n; i < newSize; i++) {
        cin >> arr[i];
    }

    // Print all elements in the array
    cout << "Elements in the array: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Clean up memory
    delete[] arr;
    
    return 0;
}