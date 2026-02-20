#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s1,s2;
    cout<<"Enter first string: ";
    getline(cin,s1);
    cout<<"Enter second string: ";
    getline(cin,s2);

    s1.erase(remove(s1.begin(), s1.end(), ' '), s1.end());
    s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1==s2)
        cout<<"Anagram";
    else
        cout<<"Not Anagram";
}
// Input:
// listen
// silent
// Output:
// Anagram