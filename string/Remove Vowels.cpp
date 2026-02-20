#include <iostream>
using namespace std;

int main() {
    string s;
    cout<<"Enter string: ";
    getline(cin,s);

    for(int i=0;i<s.length();i++){
        char c=tolower(s[i]);
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u')
            cout<<s[i];
    }
}
// Input:

// hello world
// Output:

// hll wrld
