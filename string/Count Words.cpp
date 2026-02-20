#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s;
    cout<<"Enter sentence: ";
    getline(cin,s);

    string word;
    stringstream ss(s);
    int count=0;

    while(ss>>word)
        count++;

    cout<<"Word count: "<<count;
}
// Input:

// I love coding
// Output:

// Word count: 3


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     int total=0;
//     for(int i=1;i<s.length();i++){
//         if(s[i]==' '){
//             total++;
//         }
//     }
//     if(s.length() > 0)
//         total++;   // words = spaces + 1
//     cout<<"The total number in a letter is:"<<total;
// //     int j=s.length();
// //     cout<<j;
// }