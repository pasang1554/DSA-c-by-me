#include <iostream>
using namespace std;

int main() {
    string s;
    cout<<"Enter string: ";
    cin>>s;

    string longest="";

    for(int i=0;i<s.length();i++){
        for(int j=i;j<s.length();j++){
            string sub=s.substr(i,j-i+1);
            string rev=sub;
            reverse(rev.begin(),rev.end());
            if(sub==rev && sub.length()>longest.length())
                longest=sub;
        }
    }

    cout<<"Longest Palindrome: "<<longest;
}
// Input:

// babad
// Output:

// bab