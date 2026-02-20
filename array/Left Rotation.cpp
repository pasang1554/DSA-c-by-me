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