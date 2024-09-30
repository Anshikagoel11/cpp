#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k , count =0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    vector<int>v;

    sort(arr,arr+n);
    stack<int>st;
    for(int i=0;i<n;i++){
        st.push(arr[i]);
    }
  
    while(k>0){
        st.pop();
        k--;
    }
    int remainset[n-k];
    for(int i=0;i<st.size();i++){
        st.top()=remainset[i];
        cout<<st.top()<<" ";
        st.pop();
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<(n-k);j++){
            if(v[i]==remainset[j]) 
            count+=v[i];
        }
    }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<count;
    return 0;
}
