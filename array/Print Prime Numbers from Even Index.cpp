#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i+=2){
        int num=arr[i], prime=1;
        if(num<=1) prime=0;
        for(int j=2;j*j<=num;j++){
            if(num%j==0){
                prime=0;
                break;
            }
        }
        if(prime)
            cout<<num<<" ";
    }
}
// Input:

// 5
// 2 4 5 7 11
// Output:

// 2 5 11