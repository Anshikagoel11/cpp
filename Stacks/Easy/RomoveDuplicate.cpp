//26. Remove Duplicates from Sorted Array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++) cin>>nums[i];
     unordered_map<int,int>mpp;
        int count=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
       for(int i=0;i<n;i++){
        if(mpp[nums[i]]>=1){
            ans.push_back(nums[i]);
            count++;
            mpp[nums[i]]=0;
            cout<<nums[i]<<" ";
        }
        else continue;
       }
      cout<<count;
    return 0;
}