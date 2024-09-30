//top k freguent element
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
unordered_map<int,int>mpp;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
for(int i=0;i<n;i++){
mpp[v[i]]++;
}
for(auto it:mpp){
pq.push({it.second,it.first});
if(pq.size()>k) pq.pop();
}
while(pq.size()>0){
    cout<<pq.top().second<<" ";
    pq.pop();
}
    return 0;
}