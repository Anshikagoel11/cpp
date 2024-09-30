#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, pair<int,int>>mpp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
     string s;
     int a,b;
     cin>>s>>a>>b;
     mpp[s]={a,b};
     mpp.insert({s,{a,b}});
    }
    //since maps are not continous in memory so cannot use for(int i=0;i<n;i++)...
    //have to iterator either by 'for loop' or 'for each loop'
    for(auto it:mpp){
    cout << it.first <<" "<< it.second.first << "," <<it.second.second<<endl;
    //cannot print it (since it is a pair of key and value and also cannot print it.second since its also a pair so for this also have to do .first , . second)
  }
    return 0;
}