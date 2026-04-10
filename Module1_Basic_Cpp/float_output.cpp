// Setprecision in C++
#include <iostream>
#include <iomanip> // for setprecision
using namespace std;
int main() {
    double num = 3.14159265358979323846;
    cout << "Default output: " << num << endl;

    // Set precision to 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Output with 2 decimal places: " << num << endl;

    // Set precision to 4 decimal places
    cout << setprecision(4);
    cout << "Output with 4 decimal places: " << num << endl;

    return 0;
}