// Question:
// Given a lowercase string, count the frequency of each character.

// Example:
// Input: "interview"
// Output:

// i → 2  
// n → 1  
// t → 1  
// e → 2  
// r → 1  
// v → 1  
// w → 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;

    }
    for(int i=0;i<s.size();i++){
        if(hash[s[i]-'a']!=0){
            cout<<s[i]<<"->"<<hash[s[i]-'a']<<endl;
        }
    }

}