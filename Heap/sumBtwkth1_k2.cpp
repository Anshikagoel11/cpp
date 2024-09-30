// sum between the kth1 and kth2 smallest numbers

#include<bits/stdc++.h>
using namespace std;
int kS(vector<int> & v, int k){
priority_queue<int>pq;
for(int i=0;i<v.size();i++){
        pq.push(v[i]);
        if(pq.size()>k) pq.pop();
    }
    return pq.top();
}
int main(){
     int n,k1,k2;
    cin>>n>>k1>>k2;
    vector<int>v;   
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int sum=0;
    int k1Smallest = kS(v,k1);
    int k2Smallest = kS(v,k2);
 for(int i=0;i<n;i++){
    if(v[i]>k1Smallest && v[i]<k2Smallest) sum+=v[i];
 }
 cout<<sum;
    return 0;
}