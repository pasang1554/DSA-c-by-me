#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cin>>k;
    k=k%n;

    cout<<"After Rotation: ";
    for(int i=k;i<n;i++)
        cout<<arr[i]<<" ";
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
}
// Input

// 5
// 1 2 3 4 5
// 2
// Output

// After Rotation: 3 4 5 1 2 
//storing thisin another array
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n), arr1(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int rotations;
    cin >> rotations;

    rotations = rotations % n;   // Important if rotations > n

    // Copy rotated elements into arr1
    int index = 0;

    for(int i = rotations; i < n; i++) {
        arr1[index++] = arr[i];
    }

    for(int i = 0; i < rotations; i++) {
        arr1[index++] = arr[i];
    }

    // Print rotated array
    for(int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}