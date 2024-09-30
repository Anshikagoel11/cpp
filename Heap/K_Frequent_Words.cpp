//692. Top K Frequent Words
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string words[n];
    for(int i=0;i<n;i++){
        cin>>words[i];
    }
    unordered_map<string,int>mpp;
  for(int i=0;i<n;i++) mpp[words[i]]++;
//min heap
  priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>>pq;
//sort acc to frequency
  for(auto it:mpp){
 pq.push({it.second,it.first});
 if(pq.size()>k) pq.pop();
  }    
  //store answer
set<string>res;
while(pq.size()>0){
    res.insert(pq.top().second);
    pq.pop();
}
//reverse(res.begin(),res.end());
for(auto it:res) cout<<it<<" ";
    return 0;
}