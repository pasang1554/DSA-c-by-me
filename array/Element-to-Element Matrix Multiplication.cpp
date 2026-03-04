#include <iostream>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;

    int a[r][c], b[r][c];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>a[i][j];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>b[i][j];

    cout<<"Result:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<a[i][j]*b[i][j]<<" ";
        cout<<endl;
    }
}
// Input

// 2 2
// 1 2
// 3 4
// -----
// 5 6
// 7 8
// Output

// Result:
// 5 12
// 21 32