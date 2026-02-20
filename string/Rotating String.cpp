#include <iostream>
using namespace std;

int main() {
    string s;
    int k;
    cout<<"Enter string: ";
    cin>>s;
    cout<<"Enter rotation: ";
    cin>>k;

    k = k % s.length();
    string result = s.substr(k) + s.substr(0,k);

    cout<<"Rotated String: "<<result;
}
// Input:

// abcd
// 2
// Output:

// cdab