#include <iostream>
using namespace std;

int main() {
    string email;
    cout<<"Enter email: ";
    cin>>email;

    int pos = email.find('@');
    string name = email.substr(0,pos);
    string domain = email.substr(pos);

    string hidden = name[0] + string(name.length()-2,'*') + name[name.length()-1];

    cout<<"Private Email: "<<hidden+domain;
}
// Input:

// stan@gmail.com
// Output:

// s**n@gmail.com