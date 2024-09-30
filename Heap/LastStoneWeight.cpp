//1046. Last Stone Weight

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    vector<int>v;
 priority_queue<int>pq;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
        pq.push(x);
    }
   while(pq.size()>1){
   int x=pq.top();
   pq.pop();
   int y=pq.top();
   pq.pop();
   if(x!=y) pq.push(abs(x-y));
   }
  cout<<pq.top();

    return 0;
}


//myself try this but getting isssues in erasing the element from vector
// class Solution {
//     private:
//    int weight(vector<int>&v,int n){
// priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
// if(n==1) return v[0];
    
//   for(int i=0;i<n;i++){
//         pq.push({v[i],i});
//         if(pq.size()>2) pq.pop();
//     }
  
//     int x= pq.top().first;
//     int x1= pq.top().second;
//     pq.pop();
//     int y=pq.top().first;
//     int y1=pq.top().second;
//     pq.pop();
//     if(x!=y) v.push_back(abs(x-y));
//     if(x1>y1){
//     v.erase(v.begin()+x1); 
//     v.erase(v.begin()+y1);
//      }
//      else{
//      v.erase(v.begin()+y1); 
//     v.erase(v.begin()+x1);   
//      }
//      n= v.size();
//     return weight(v,n);
// } 
// public:
//     int lastStoneWeight(vector<int>& v) {
//       int n=v.size();
//       return  weight(v,n);  
//     }
// };