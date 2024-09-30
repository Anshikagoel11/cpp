#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<string,int>mpp;
    mpp.insert({"ujjwal",56});
    mpp.insert({"ujjwal",89});
    // mpp["ujjwal"]=1;
    // mpp["ujjwal"]=2;
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second;
    }
    return 0;
}