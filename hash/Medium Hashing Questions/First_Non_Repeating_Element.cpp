// Question:
// Given an array, find the first element that appears only once.

// Example:
// Input: 4 5 1 2 1 4
// Output: 5
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[s[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mpp[s[i]]==1){
            cout<<s[i];
            break;
        }
    }
    return 0;
}