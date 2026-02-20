#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Differences: ";
    for(int i=0;i<n-1;i++)
        cout<<arr[i+1]-arr[i]<<" ";
}
// Input
// 5
// 10 15 20 25 30
// Output
// Differences: 5 5 5 5