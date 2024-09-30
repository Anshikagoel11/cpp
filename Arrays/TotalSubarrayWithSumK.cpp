//total subarray that have sum=k
//for this ,rather than storing pair of {sum,index} in map we store (sum,count of that sum) and then if(sum-k) is present in the map then ans+=count of that sum means it.second.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[100];
    int ans=0;
    unordered_map<int,int>mpp; // TC - O(1) for unordered map
  
    for(int i=0;i<n;i++){
         cin>>arr[i];
    }

    //logic 
    int sum=0;
    mpp.insert({0,1});   // to deal with cornor conditions
    for(int i=0;i<n;i++){    //O(n)
         sum+=arr[i];
         auto it = mpp.find(sum-k);  //O(1) for unordered map
         if(it!=mpp.end()){   
           ans+=(*it).second;    //no. of count correspond to that sum
         }
         mpp[sum]++;  //to record no.of times a sum is occuring
    }
 cout<<"Total subarray with sum k : "<<ans;
    return 0;
}

//TC- O(n)
//SC-O(n)