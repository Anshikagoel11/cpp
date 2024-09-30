#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        pq.push(arr[i]);
    }
    int minCost=0;
   while(pq.size()>1){
    int a=pq.top();
    pq.pop();
    int b=pq.top();
    pq.pop();
    int c=a+b;
    minCost+=c;
    pq.push(c);
   }
   cout<<minCost;
    return 0;
}