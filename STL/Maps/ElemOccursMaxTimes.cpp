// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include<bits/stdc++.h>
using namespace std;
int main(){
     int n , a=0;
        cin>>n;
        vector<int>nums;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }
        int max = *max_element(nums.begin(),nums.end());
        int hash[max+1]={0};
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<=max;i++){
            if(hash[i]>n/2){
            cout<<i<<endl;
            break;
            }
           else a++;
        }
        if(a==max+1) cout<<"No element";  // agar 'a' equal hua 'max+1'(full size of hash) ke mtlb no elem is occuring more than n/2 times  aur kabhi 2 elem honge nhi kyuki n/2 se greater bola h toh dursa wale hamasa ya toh n/2 ke equal honge ya less.
    return 0;
}

//------------------------------ method 2--------------------------------------------------

//The intuition behind this approach is that if an element occurs more than n/2 times in the array (where n is the size of the array), it will always occupy the middle position when the array is sorted. Therefore, we can sort the array and return the element at index n/2.

//  sort(nums.begin(), nums.end());
//         int n = nums.size();
//         return nums[n/2];



//------------------------------ method 3--------------------------------------------------

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n=nums.size(),ans=0;
//         unordered_map<int,int>m;
//         for(int i=0;i<n;i++){
//             m[nums[i]]++;
//         }
//         for(int i=0;i<m.size();i++){
//             if(m[i]>n/2){
//             ans=i;
//             break;
//             }
//         }
//      return ans;
//     }
// };