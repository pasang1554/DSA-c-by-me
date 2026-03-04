#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int min=arr[0], max=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]<min) min=arr[i];
        if(arr[i]>max) max=arr[i];
    }

    cout<<"Min: "<<min<<endl;
    cout<<"Max: "<<max;
}
// Input
// 5
// 8 3 10 1 6
// Output
// Min: 1
// Max: 10

// min and max in array 
// 4 5 6 7 2 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<arr[0]<<"is the min "<<"and "<<arr[n-1]<<" is the max";
}