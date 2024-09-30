// for a ith day how many CONSECUTIVE number smaller or equal to number at that day is present
// basically hume kisi particluar day me kya stock ka record hai -usse smaller or equal wale sare stock record ke count chaye

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int stock[n];
    stack<pair<int,int>>s;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>stock[i];
        s[stock[i]]=i;
    }
    for(int i=0;i<n;i++){      
        if(s.size()==0) v.push_back(-1);
        else if(s.size()>0 && stock[i]<s.top().first) v.push_back(s.top().second);
       else if(s.size()>0 && s.top().first<=stock[i]){
        while(s.size()>0 && s.top().first<=stock[i]){
           s.pop();
        }
        if(s.size()==0) v.push_back(-1);
        else {
            v.push_back(s.top().second);
        }
       }
       s.push({stock[i],i});
    }
    for(int i=0;i<v.size();i++){
        cout<<i-v[i]<<" ";
    }
    return 0;
}