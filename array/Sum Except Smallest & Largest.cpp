#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    int min=arr[0], max=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]<min) min=arr[i];
        if(arr[i]>max) max=arr[i];
    }

    cout<<"Sum: "<<sum-min-max;
}
// Input

// 5
// 1 2 3 4 5
// Output

// Sum: 9