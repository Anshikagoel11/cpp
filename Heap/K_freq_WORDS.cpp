//692. Top K Frequent Words ---> good since ques also want ans in lexographical oreder if freq of the words are same 
// #learn something new

#include<bits/stdc++.h>
using namespace std;
 bool cmp(pair<int,string>p1,pair<int,string>p2){
  if(p1.first==p2.first) return p1.second<p2.second;
  return p1.first>p2.first;  
}
int main(){
 
    vector<string>arr;
    int n,k;
    cin>>n>>k;
    map<string,int>mpp;   //orderedmap
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        arr.push_back(s);
        mpp[s]++; // or mpp[v[i]]++;
    }
    vector<pair<int,string>>v;
    for(auto it:mpp){
v.push_back({it.second , it.first});
    } 
 sort(v.begin(),v.end(),cmp);
//lambda function
// sort(v.begin(),v.end(),[](pair<int,string>p1 , pair<int,string>p2){
// if(p1.first==p2.first) return p1.second<p2.second;
//   return p1.first>p2.first;  
// });

for(int i=0;i<k;i++){
    cout<<v[i].second<<" ";
}
return 0;
}


//using heap
// class Solution {
//     struct cmp{
//         bool operator()(const pair<string,int> &a,const pair<string,int> &b){
//             if(a.second == b.second)
//             return a.first>b.first;
//             else
//             return a.second<b.second;
//         }
//     };
// public:
//     vector<string> topKFrequent(vector<string>& words, int k) {
//         map<string,int> m;
//         for(auto i:words)
//         m[i]++;

//         vector<pair<string,int>> ans(m.begin(),m.end());

//         priority_queue<pair<string,int>,vector<pair<string,int>>,cmp> pq(ans.begin(),ans.end());
//         vector<string> pr;

//         while(k--){
//             pr.push_back(pq.top().first);
//             pq.pop();
//         }

//         return pr;
//     }
// };