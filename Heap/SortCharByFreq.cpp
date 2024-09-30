//451. Sort Characters By Frequency
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int>mpp; // unoredred_map reduce TC
    for(int i=0;i<s.length();i++){
     mpp[s[i]]++;
    }
    //max heap 
    priority_queue<pair<int,char>>pq;
    for(auto it:mpp){
    pq.push({it.second,it.first});
    }
    string ans;
    while(pq.size()>0){
        for(int j=0;j<pq.top().first;j++){
              ans+=pq.top().second;
        }     
        pq.pop();
    }
    cout<<ans;
}