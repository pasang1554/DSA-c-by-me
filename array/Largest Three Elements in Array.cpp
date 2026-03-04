#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int first,second,third=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second){
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third){
            third=arr[i];
        }
    }
    cout<<"largest three elements are:"<<first<<","<<second<<","<<third;

}