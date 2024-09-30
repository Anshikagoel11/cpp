//1209. Remove All Adjacent Duplicates in String II

#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st; 
        for(int i=0;i<s.length();i++){
        if(st.size()==0)  st.push({s[i],1}); 
        else if(st.size()>0 && st.top().first!=s[i]) st.push({s[i],1});
        else if(st.size()>0 && st.top().first==s[i]){
            auto pre=st.top();
          st.pop();
          st.push({s[i], pre.second+1});
        }
        if(st.top().second==k) st.pop();
        }
        
        string ans;
        while(st.size()>0){
            for(int j=0;j<st.top().second;j++){
       ans+=st.top().first;
            }
       st.pop();
        }
        int n=ans.size()/2;
        int m=ans.size();
        for(int i=0;i<n;i++){
            char temp=ans[i];
            ans[i]=ans[m-1-i];
            ans[m-1-i]=temp;
        }
        cout<<endl;
        return ans;
}
int main(){
    string s;
    int k;
    cin>>s;
    cin>>k;
string res = removeDuplicates(s,k);
cout<<res;
}