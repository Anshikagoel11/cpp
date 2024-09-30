// A famous Italian restaurant allows guests to enter only if they are present in pairs and the sum of the wealth of the people of the pair is a power of 3. A group of people wants to eat at the restaurant. Mathematically, if there are two people of wealth a and b, it forms a valid pair if 
//  (a+b)='3^k' for some positive integer k. They want to know how many possible pairs would be allowed entry.
//  One person can be in multiple valid pairs.
// A pair of person X and Y is the same as a pair of person Y and X.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0,p;
    cin>>n;
    int arr[n];
   // unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        //mpp[arr[i]]++;
    }
  
      for(int i=0;i<n;i++){
        int p=arr[i]+arr[i+1];
        double x = log10(p) / log10(3);
    if (x - (int)x == 0) {
    // mpp[arr[i]]--;
    // count+=mpp[arr[i]];
    // mpp[arr[i]]=0;   
    // cout<<"yes"<<endl; 
    count++;
}
     }  
  
cout<<count<<" ";
    return 0;
}