#include <iostream>
using namespace std;

int main() {
    string s;
    cout<<"Enter string: ";
    cin>>s;

    int count=1;

    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1])
            count++;
        else{
            cout<<s[i]<<count;
            count=1;
        }
    }
}
// Input:

// aaabbc
// Output:

// a3b2c1