#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    cout<<"Enter sentence: ";
    getline(cin,sentence);

    string word;
    stringstream ss(sentence);

    while(ss>>word){
        if(word=="bad")
            cout<<"good ";
        else
            cout<<word<<" ";
    }
}
// Input:

// this is bad day
// Output:

// this is good day