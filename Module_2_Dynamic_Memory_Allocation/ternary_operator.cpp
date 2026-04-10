// 2-8 Ternary Operator
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int max = (a > b) ? a : b;
    cout << "The maximum number is: " << max << endl;
    int x = 10;
    if(x % 2 == 0) {
        cout << x << " is even." << endl;
    } else {
        cout << x << " is odd." << endl;
    }
     // Using ternary operator for the same logic
    string result = (x % 2 == 0) ? "even" : "odd";
    cout << x << " is " << result << "." << endl;
    // Nested ternary operator example
    int num = 15;
    string category = (num < 10) ? "small" : (num < 20) ? "medium" : "large";
    cout << num << " is a " << category << " number." << endl;
    // Ternary operator with function calls
    auto getSign = [](int n) {
        return (n > 0) ? "positive" : (n < 0) ? "negative" : "zero";
    };
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The number is " << getSign(number) << "." << endl;
    
    return 0;
}