#include <bits/stdc++.h>
using namespace std;

int main() { 
    int q;
    cin>>q;

    for(int i=0;i<q;i++){
        int x,y;
        cin>>y>>x;
         set<int>box;
        
        if(y==1)  box.insert(x);
    
        else if(y==2)  box.erase(x);
     
       else {
        auto it = box.find(x);
        if(it!=box.end())  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }
    return 0;
}