#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
       cin>>n;
    stack<int>st1;
    stack<int>st2;
    for(int i=0;i<n;i++){
     cin>>a;
     st1.push(a);
    }
    if(n%2==0){
        while(st1.size()>n/2){
          st2.push(st1.top());
          st1.pop();
    }
    }
    else{
        while(st1.size()>n/2+1){
          st2.push(st1.top());
          st1.pop();
    }  
    }
    st1.pop();
    while(st1.size()>0){
        st2.push(st1.top());
        st1.pop();
    }
    while(st2.size()>0){
        cout<<st2.top()<<" ";
        st2.pop();
    }
    return 0;
}