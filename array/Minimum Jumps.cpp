#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int jumps=0, pos=0;

    while(pos<n-1){
        pos+=arr[pos];
        jumps++;
    }

    cout<<"Minimum jumps: "<<jumps;
}
