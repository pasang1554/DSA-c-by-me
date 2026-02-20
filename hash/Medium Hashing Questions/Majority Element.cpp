// Question:
// Find the element that appears more than n/2 times.

// Example:
// Input: 2 2 1 2 3 2 2
// Output: 2
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
    for(auto it:mpp){
        if(it.second>n/2){
            cout <<it.first;
            break;
        }
    }
}