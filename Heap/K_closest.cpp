#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,k,x;
    cin>>n>>k>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    priority_queue<pair<int,int>>pq; //max heap (since need closest means difference will be small)
    for(int i=0;i<n;i++){
    pq.push({abs(arr[i]-x) , arr[i]});
    if(pq.size()>k) pq.pop();
    }
    while(pq.size()>0){
        cout<<pq.top().second<<" ";
        pq.pop();
    }
    return 0;
}