#include <iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cin>>x;

    int floor=-1, ceil=-1;

    for(int i=0;i<n;i++){
        if(arr[i]<=x)
            floor=arr[i];
        if(arr[i]>=x && ceil==-1)
            ceil=arr[i];
    }

    cout<<"Floor: "<<floor<<endl;
    cout<<"Ceil: "<<ceil;
}
Input
5
1 3 5 7 9
6
Output
Floor: 5
Ceil: 7