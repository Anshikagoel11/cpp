
//1338. Reduce Array Size to The Half
#include<bits/stdc++.h>
using namespace std;
int minset(int arr[],int n){
  unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++; // store frequency
    }
    priority_queue<pair<int,int>>pq;
    for(auto it:mpp){
        pq.push({it.second , it.first}); // sort frequency (uses freq as key)
    }
    int freq=pq.top().first;
    int minSet=0;
    while(pq.size()>0){
        if(freq>=n/2){
            return minSet+1;
            break;
        }
       pq.pop();
       freq+=pq.top().first;
       minSet++;
    }
    return minSet+1;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< minset(arr,n);
    return 0;
}
  