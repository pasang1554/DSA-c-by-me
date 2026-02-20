#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Reversed: ";
    for(int i=n-1;i>=0;i--)
        cout<<arr[i]<<" ";
}
// Input
// 5
// 1 2 3 4 5
// Output
// Reversed: 5 4 3 2 1