// Question:
// Given an array of n integers, print the frequency of each element.

// Example:
// Input: 1 2 2 3 1 4
// Output:

// 1 → 2  
// 2 → 2  
// 3 → 1  
// 4 → 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    map<int ,int>mpp;
    for(int i=0;i<n;i++){
        mpp[s[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

}