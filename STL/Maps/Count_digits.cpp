//3174. Clear Digits
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
   // map<int,int>mpp;
    stack<char>st;
       // map<int,int>mpp;
        string ans;
        for(int i=0;i<s.length();i++){
        if(st.size()==0) st.push(s[i]);
    // or   else if(st.size()>0 && mpp[i]>=48 && mpp[i]<=57) st.pop();
    else if(st.size()>0 && s[i]>='0' && s[i]<='9') st.pop();
       else st.push(s[i]);
        }
        while(st.size()>0){
            ans+=st.top();
            st.pop();
        }
        for(int i=0;i<ans.length()/2;i++){
            char temp=ans[i];
        ans[i]=ans[ans.length()-1-i];
        ans[ans.length()-1-i]=temp;
        }
        cout<<ans;
    return 0;
}