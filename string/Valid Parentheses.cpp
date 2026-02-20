#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cout<<"Enter brackets: ";
    cin>>s;

    stack<char> st;
    bool valid=true;

    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
            st.push(s[i]);
        else{
            if(st.empty()){
                valid=false;
                break;
            }
            char top=st.top();
            st.pop();

            if((s[i]==')'&&top!='(')||
               (s[i]=='}'&&top!='{')||
               (s[i]==']'&&top!='[')){
                valid=false;
                break;
            }
        }
    }

    if(!st.empty()) valid=false;

    if(valid) cout<<"Valid";
    else cout<<"Invalid";
}
// Input:

// ()[]{}
// Output:

// Valid
