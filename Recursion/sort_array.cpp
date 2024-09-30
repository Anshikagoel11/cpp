#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>&v,int temp){
    if(v.size()==0 || v[v.size()-1]<=temp){
        v.push_back(temp);
        return ;
    }
    int val=v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(val);
    return ; 
}

void Sort(vector<int>&v){
if(v.size()==1) return ;
int temp=v[v.size()-1];
v.pop_back();
Sort(v);
insert(v,temp);
}

int main(){
     int n;
     cin>>n;
    vector<int>v;  
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    Sort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}