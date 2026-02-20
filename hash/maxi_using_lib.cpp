#include<bits/stdc++.h>
using namespace std;
int max_using_lib(int n,int s[]){
    return *max_element(s,s+n);
}
int main(){
    int n;
    cin >>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    cout<<max_using_lib(n,s);
    
}