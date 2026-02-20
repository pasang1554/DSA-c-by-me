#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string ip;
    cout<<"Enter IP: ";
    cin>>ip;

    stringstream ss(ip);
    string part;
    int count=0;
    bool valid=true;

    while(getline(ss,part,'.')){
        if(part.empty()||stoi(part)>255||stoi(part)<0)
            valid=false;
        count++;
    }

    if(count!=4) valid=false;

    if(valid) cout<<"Valid IPv4";
    else cout<<"Invalid IPv4";
}
// Input:

// 192.168.0.1
// Output:

// Valid IPv4