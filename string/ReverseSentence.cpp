#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string word="";
    for(int i=0;i<=s.length();i++){
        if(s[i]==' '|| i == s.length()){
            reverse(word.begin(),word.end());
            cout<<word<<" ";
            word="";
            
        }
        else{
            word+=s[i];
        }
    }

}