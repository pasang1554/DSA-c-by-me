// Question:
// Given an array and a target k, check if there exist two numbers whose sum is k.

// Example:
// Input: arr = [2, 7, 11, 15], k = 9
// Output: true (2 + 7)

// 📌 Asked in Google, Amazon, Microsoft.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;int target;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    cin>>target;
    unordered_map<int ,int>mpp;
    for(int i=0;i<n;i++){
        int complement=target-s[i];
        if(mpp.find(complement)!=mpp.end()){
            cout<<"true";
            return 0;
        }
        mpp[s[i]]=i;
        
    }
    cout<<"no pair found";
    return 0;


}