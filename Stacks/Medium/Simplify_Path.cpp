#include<bits/stdc++.h>
using namespace std;
int main(){
        string s;
        cin>>s;   
 stack<string>st;
 for(int i=0;i<s.length();i++){
    if(s[i]=='/') continue;
    string temp;
    while(i<s.length() && s[i]!='/'){
        temp+=s[i];
        i++;
    } 
    if(temp==".") continue;
    else if(temp==".."){ 
    if(st.size()>0) 
    st.pop();
    }
    else st.push(temp);
 }
 string res;
 while(st.size()>0){
 res="/"+st.top()+res;
 st.pop();
 }
 cout<<res;
    return 0;
}
