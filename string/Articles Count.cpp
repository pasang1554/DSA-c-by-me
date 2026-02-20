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

    while(ss>>word){
        if(word=="a" || word=="an" || word=="the")
            count++;
    }

    cout<<"Articles count: "<<count;
}
// Input:
// the cat and a dog
// Output:
// Articles count: 2