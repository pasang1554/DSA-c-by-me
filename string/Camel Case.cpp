#include <iostream>
using namespace std;

int main() {
    string s;
    cout<<"Enter CamelCase: ";
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            cout<<"_"<<(char)tolower(s[i]);
        } else {
            cout<<s[i];
        }
    }
}
// Input:

// helloWorld
// Output:

// hello_world