#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n-1;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }

    cout<<"After Swap: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
// Input
// 6
// 1 2 3 4 5 6
// Output
// After Swap: 2 1 4 3 6 5