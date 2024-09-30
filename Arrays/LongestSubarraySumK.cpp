//Longest Subarray with sum =k;
//optimal
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[100];
    int length=0;
    unordered_map<int,int>mpp; // TC - O(1) for unordered map
  
    for(int i=0;i<n;i++){
         cin>>arr[i];
    }
    //logic 
    int sum=0;
    mpp.insert({0,-1});  // to deal with cornor conditions
    for(int i=0;i<n;i++){    //O(n)
         sum+=arr[i];
         auto it = mpp.find(sum-k);   //O(1)
         if(it!=mpp.end()){   
            length=max(length,i-(*it).second);
         }
         mpp.insert({sum,i});  //to record every previous sum with its index
    }
    // for(auto it:mpp) cout<<it.first<<" "<<it.second<<"   ";
 cout<<"length : "<<length;
    return 0;
}

//TC- O(n)+O(1)=O(n)
//SC - O(n) //use by map

//also benefit of using map for "maximum length" is if there is sum there is repeating means any sum occuring at index =2 and then same sum occuring at index =6 then map will only store the staring sum(unique) jisse dur wale sum hoga toh current (index-sum) index  ki value zada hogi and that is indicating length of subarray


//similar ques - total subarray that have sum=k.
//for this ,rather than storing pair of {sum,index} in map we store (sum,count of that sum) and then if(sum-k) is present in the map then ans+=count of that sum means it.second.