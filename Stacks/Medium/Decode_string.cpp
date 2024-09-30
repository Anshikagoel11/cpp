//394. Decode String
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]!=']'){
            st.push(s[i]);
        }

        if(s[i]==']'){
            string r="";
         while(st.size()>0 && st.top()!='['){
          r=st.top()+r;
          st.pop();
         }
          st.pop();
           string number;  
          while(st.size()>0 && isdigit(s.top())){
         
          number=st.top()+number; //make st.top()-> char to string so that further can convert into int by stoi function
          st.pop(); 
          }          //number=s.top()+number --so that 100 ka 100 hi ho 001 nhi
          int n =stoi(number); //convert string to int
          while(n--){
         for(int i=0;i<r.length();i++){
            st.push(r[i]);
         }
          }
        }
    }
    string ans;
    while(st.size()>0){
        ans=st.top()+ans;
        st.pop();
    }
cout<<ans;
}