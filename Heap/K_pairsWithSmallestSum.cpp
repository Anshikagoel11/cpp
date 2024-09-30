//373. Find K Pairs with Smallest Sums
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int nums1[n] , nums2[n];
    for(int i=0;i<n;i++){
        cin>>nums1[i];
    }
    for(int i=0;i<n;i++){
        cin>>nums2[i];
    }
  priority_queue<pair<int,pair<int,int>>>pq;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x=nums1[i]+nums2[j];
             pq.push({x, {nums1[i],nums2[j]}});
             if(pq.size()>k) pq.pop();
            }
        }
        vector<pair<int,int>>res;
        while(pq.size()>0){
            res.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        for(int i=0;i<res.size();i++){
            cout<<res[i].first<<" "<<res[i].second<<endl;;
        }
    return 0;
}