#include <iostream>
using namespace std;

int main() {
    string secret, guess;
    cout<<"Enter secret: ";
    cin>>secret;
    cout<<"Enter guess: ";
    cin>>guess;

    int bulls=0,cows=0;

    for(int i=0;i<secret.length();i++){
        if(secret[i]==guess[i])
            bulls++;
        else{
            for(int j=0;j<secret.length();j++){
                if(secret[i]==guess[j])
                    cows++;
            }
        }
    }

    cout<<bulls<<" Bulls "<<cows<<" Cows";
}
// Input:

// 1807
// 7810
// Output:

// 1 Bulls 3 Cows