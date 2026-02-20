#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int swaps=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                swaps++;
            }
        }
    }

    cout<<"Sorted: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<"\nSwaps: "<<swaps;
}
// Input
// 4
// 4 3 2 1
// Output
// Sorted: 1 2 3 4
// Swaps: 6