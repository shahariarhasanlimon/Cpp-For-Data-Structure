// 3-8 sort() Function in C++
#include<bits/stdc++.h>
using namespace std;
int main()
{    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    // Sorting the array in ascending order
    sort(arr, arr+n);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}