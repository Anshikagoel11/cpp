// 429. calender1 medium 

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>vp;
    cout<<"From which to which date you want booking?";
    pair<int,int>b;
    cin>>b.first>>b.second;
    set<pair<int,int>>AlreadyBooked;
    int flag=0;
    for(auto it:AlreadyBooked){
        
        if(b.first<it.first && b.second<=it.first) {
            flag=1;
        }
        else if(b.first>=it.second && b.second>it.second){
             flag=1;
        }
        else return false;
    }
    AlreadyBooked.insert({b.first,b.second});  // agar true ki condition hogi toh insert hoga aur yhi tk tabhi ayaga varna phale hi return ho jyegaa
    return true;
    return 0;
}