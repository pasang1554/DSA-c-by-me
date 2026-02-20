#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Days: ";
    for(int i=0;i<n;i++){
        int days=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                days=j-i;
                break;
            }
        }
        cout<<days<<" ";
    }
}
// Input

// 5
// 73 74 75 71 69
// Output

// Days: 1 1 0 0 0