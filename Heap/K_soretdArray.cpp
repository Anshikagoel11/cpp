#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    priority_queue<int, vector<int>,greater<int>>pq; //min heap
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) {
            v.push_back(pq.top());
            pq.pop();
    }
    }
    // last me 4 elem honge heap me bs toh vo size >k nhi hoga toh vo vector me nhi jyenge toh unhe end me daalne honge alag se 
    while(pq.size()>0){
        v.push_back(pq.top());
        pq.pop();
    }
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    return 0;
}