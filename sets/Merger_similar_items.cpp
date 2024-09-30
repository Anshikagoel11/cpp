//2363. Merge Similar Items
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int items1[n][m];
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
        cin>>items1[i][j];
       }
    }
    int p,q;
    cin>>p>>q;
    int items2[p][q];
    for(int i=0;i<p;i++){
       for(int j=0;j<q;j++){
        cin>>items2[i][j];
       }
    }
   map<int,int>mpp;
    for(int i=0;i<n;i++){
        for(int j=0;j<1;j++){
         mpp[items1[i][j]]+=;
        }       
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<1;j++){
         mpp[items2[i][j]]=0;
        }       
    }
    cout<<"output:"<<endl;
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}