#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of strings: ";
    cin>>n;

    string arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    string prefix = arr[0];

    for(int i=1;i<n;i++){
        while(arr[i].find(prefix)!=0){
            prefix = prefix.substr(0,prefix.length()-1);
        }
    }

    cout<<"Longest Common Prefix: "<<prefix;
}
// Input:

// 3
// flower
// flow
// flight
// Output:

// fl