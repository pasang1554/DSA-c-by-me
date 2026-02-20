#include <iostream>
using namespace std;

int main() {
    string s;
    cout<<"Enter string: ";
    cin>>s;

    for(int i=0;i<s.length()-1;i+=2){
        swap(s[i],s[i+1]);
    }

    cout<<"Swapped: "<<s;
}
// Input:

// abcd
// Output:

// badc