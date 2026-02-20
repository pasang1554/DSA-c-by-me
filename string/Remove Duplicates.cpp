#include <iostream>
using namespace std;

int main() {
    string s;
    cout<<"Enter string: ";
    cin>>s;

    string result="";

    for(int i=0;i<s.length();i++){
        if(result.find(s[i])==string::npos)
            result+=s[i];
    }

    cout<<"After removing duplicates: "<<result;
}
// Input:

// programming
// Output:

// progamin