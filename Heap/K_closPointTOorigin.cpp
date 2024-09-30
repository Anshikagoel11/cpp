// k points clostest to origin .....k and closest meap heap will use
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    priority_queue<pair<int,pair<int,int>>>pq;
    for(int i=0;i<n;i++){
        pq.push({arr[i][0]*arr[i][0]+arr[i][1]*arr[i][1] , {arr[i][0] , arr[i][1]}});
        if(pq.size()>k) pq.pop();
    }
    while(pq.size()>0){
        cout<<pq.top().second.first<<" "<<pq.top().second.second<<"   ";
        pq.pop();
    }
    return 0;
}