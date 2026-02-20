#include <iostream>
using namespace std;

int main() {
    string s;
    cout<<"Enter string: ";
    cin>>s;

    int freq[26]={0};

    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            freq[tolower(s[i])-'a']++;
        }
    }

    for(int i=0;i<26;i++){
        if(freq[i]>0)
            cout<<(char)(i+'a')<<" -> "<<freq[i]<<endl;
    }
}
// Input:

// banana
// Output:

// a -> 3
// b -> 1
// n -> 2
