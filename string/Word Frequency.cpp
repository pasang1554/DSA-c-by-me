#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    string str;
    cout<<"Enter sentence: ";
    getline(cin, str);

    map<string,int> freq;
    string word;
    stringstream ss(str);

    while(ss >> word) {
        freq[word]++;
    }

    for(auto it : freq) {
        cout<<it.first<<" -> "<<it.second<<endl;
    }
}
//input:
 //apple banana apple mango banana
//output:
//apple -> 2
// banana -> 2
// mango -> 1