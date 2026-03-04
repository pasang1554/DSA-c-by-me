#include <iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cin>>x;

    cout<<"After Removal: ";
    for(int i=0;i<n;i++){
        if(arr[i]!=x)
            cout<<arr[i]<<" ";
    }
}
// Input
// 5
// 1 2 3 2 4
// 2
// Output
// After Removal: 1 3 4


// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int k=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]!=val){
//                 nums[k]=nums[i];
//                 k++;
//             }
//         }
//         return k;
        
//     }
// };