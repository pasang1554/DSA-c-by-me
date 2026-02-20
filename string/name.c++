#include <iostream>
using namespace std;

int main() {
    string s = "john sena";
    
    int spaceIndex = s.find(' ');
    
    string result = s[0] + s.substr(spaceIndex);
    
    cout << result;
    
    return 0;
}
