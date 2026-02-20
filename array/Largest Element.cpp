#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int max=arr[0];

    for(int i=1;i<n;i++)
        if(arr[i]>max)
            max=arr[i];

    cout<<"Largest: "<<max;
}
// Input
// 4
// 5 9 2 11
// Output
// Largest: 11