#include <iostream>
using namespace std;

int main() {
    string word;
    cout<<"Enter word: ";
    cin>>word;

    string row1="qwertyuiopQWERTYUIOP";
    string row2="asdfghjklASDFGHJKL";
    string row3="zxcvbnmZXCVBNM";

    int r1=0,r2=0,r3=0;

    for(int i=0;i<word.length();i++){
        if(row1.find(word[i])!=string::npos) r1++;
        if(row2.find(word[i])!=string::npos) r2++;
        if(row3.find(word[i])!=string::npos) r3++;
    }

    if(r1==word.length()||r2==word.length()||r3==word.length())
        cout<<"Can type using one row";
    else
        cout<<"Cannot type using one row";
}
// Input:

// Dad
// Output:

// Can type using one row