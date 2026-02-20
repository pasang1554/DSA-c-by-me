#include <iostream>
#include <map>
using namespace std;

int main() {
    string s;
    cout<<"Enter Roman: ";
    cin>>s;

    map<char,int> m;
    m['I']=1; m['V']=5; m['X']=10;
    m['L']=50; m['C']=100;
    m['D']=500; m['M']=1000;

    int total=0;

    for(int i=0;i<s.length();i++){
        if(m[s[i]] < m[s[i+1]])
            total -= m[s[i]];
        else
            total += m[s[i]];
    }

    cout<<"Integer: "<<total;
}
// Input:

// IX
// Output:

// Integer: 9