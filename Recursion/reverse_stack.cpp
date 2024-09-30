#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>&st , int elem){
    if(st.size()==0){
        st.push(elem);
        return;
    }
    int temp=st.top();
    st.pop();
    insert(st,elem);
    st.push(temp);
    return;
}
void reverse(stack<int>&st){
    if(st.size()==0) return;
    int elem=st.top();
    st.pop();
    reverse(st);
    insert(st,elem);
    return;
}
int main(){
    int n;
    cin>>n;
    stack<int>st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    reverse(st);
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}