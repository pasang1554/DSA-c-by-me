#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n],b[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++)
        cin>>b[i];

    cout<<"XOR Result: ";
    for(int i=0;i<n;i++)
        cout<<(a[i]^b[i])<<" ";
}
// Input
// 3
// 1 2 3
// 4 5 6
// Output
// XOR Result: 5 7 5