#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++){
        int num=arr[i], rev=0,temp=num;
        while(temp>0){
            rev=rev*10+temp%10;
            temp/=10;
        }
        if(rev==num)
            cout<<num<<" ";
    }
}
// Input:

// 4
// 121 123 454 789
// Output:

// 121 454