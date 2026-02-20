#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int visited[n]={0};

    int k;
    cin>>k;

    for(int i=0;i<k;i++){
        int step;
        cin>>step;
        for(int j=step-1;j<n;j+=step)
            visited[j]=1;
    }

    int count=0;
    for(int i=0;i<n;i++)
        if(visited[i]==0)
            count++;

    cout<<"Unvisited leaves: "<<count;
}