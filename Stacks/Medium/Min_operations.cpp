//1249. Minimum Remove to Make Valid Parentheses

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    stack<char>st;
    for(int i=0;i<s.length();i++){
      if(st.size()==0 && s[i]==')') continue;
      else if(st.size()==0 && s[i]!=')') st.push(s[i]);
      else if(st.size()>0 && count>=2){
        if(s[i]=='(') count++;
        else if(s[i]==')') count--;
        st.push(s[i]);
      }
      else if(st.size()>0){
        if(s[i]==')') count=2;
        else st.push(s[i]);
      } 
    }
    vector<char>res;
        while(st.size()>0){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            cout<<res[i];
        }
    
    return 0;
}