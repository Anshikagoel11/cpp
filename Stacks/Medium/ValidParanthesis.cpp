#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>st;
     string s;
        cin>>s;
    for(int i=0;i<s.length();i++){     
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else{
             if(st.empty()) cout<<"false"; // this condition is used if the input string may contain only open brackets and used to starting to increase the functionality of the code
            else if(s[i]==')' && st.top()=='(') st.pop();
            else if(s[i]==']' && st.top()=='[') st.pop();
            else if(s[i]=='}' && st.top()=='{') st.pop();
            else cout<< "false"; // if empty bhe na ho aur yeh closed brackets bhe na ho then "false" hi hoga

        }
    }
    if(st.empty()) cout<<"true";
    else cout<<"false";
    return 0;
}


//or mehtod 2
//not printing anything !! debugg issue


//     unordered_map<char,int>symbols={{'[',-3},{'{',-2},{'(',-1},{')',1},{'}',2},{']',3}}; //brackets ko key and num aasign ko value so that now means this mpp[barcket] will gives number 
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//     string s;
//     cin>>s;
//     stack<char>st;
//     for(auto bracket:s){
//         if(symbols[bracket]<0){ //means open bracket h
//         st.push(bracket);
//         }
//         else{
//             if(st.empty()) cout<< "NO";
//              char top=st.top();
//              st.pop();
//              if(symbols[bracket]+symbols[top]==0) cout<<"NO";
//         }
//     }
// if(st.empty()) cout<<"YES";
// else cout<<"NO";
//     }
//     return 0;
// }