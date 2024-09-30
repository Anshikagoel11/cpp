#include<bits/stdc++.h>
using namespace std;
int NowRotate(int arr[], int ld){
    queue<int>que;
    for(int j=0;j<=ld;j++){
      que.push(arr[j]);
    }
    if(que.size()>0 && que.front()<=arr[ld]){
        while(que.size()>0 && que.front()<=arr[ld]){
            que.pop();
        }
        if(que.size()==0) {
            return -1;
        }
        else return que.front();
    }
    else return que.front();
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    stack<int>st;
    for(int i=n-1;i>=0;i--){
    if(st.size()==0) {
        v.push_back(NowRotate(arr,i)); //pushing in vector not stack.so dont confuse
       
    }
    else if(st.size()>0 && st.top()>arr[i]) v.push_back(st.top());
    else if(st.size()>0 && st.top()<=arr[i]){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) {
            v.push_back(NowRotate(arr,i));
        }
        else v.push_back(st.top());
    }
    st.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}