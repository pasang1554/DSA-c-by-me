#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int hash[10]={0};
    for(int i=0;i<n;i++){
        hash[s[i]]+=1;
    }
    int number;
    cin>>number;
    cout<<hash[number];

    }